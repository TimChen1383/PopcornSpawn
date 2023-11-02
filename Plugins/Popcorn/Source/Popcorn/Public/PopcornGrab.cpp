// Fill out your copyright notice in the Description page of Project Settings.


#include "PopcornGrab.h"

// Sets default values for this component's properties
UPopcornGrab::UPopcornGrab()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPopcornGrab::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPopcornGrab::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Stick radial force in front of player's view point
	if(SpawnedRadialForce)
	{
		FVector PlayerViewpoint;
		FRotator PlayerRotation;
		GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewpoint, PlayerRotation);
		ACharacter* CurrentPlayer = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		FVector CurrentPlayerLoc = CurrentPlayer->GetActorLocation();
		FVector NewLoc = CurrentPlayerLoc + PlayerRotation.Vector()*800.0f + ForcePlayerOffset;
		SpawnedRadialForce->SetActorLocation(NewLoc);
		
	}

	// ...
}

void UPopcornGrab::GrabObjects()
{
	//Run line trace to find the spawn location of radial force actor
	FHitResult HitResult;
	FVector PlayerCurrentLocation;
	FRotator PlayerCurrentRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerCurrentLocation, PlayerCurrentRotation);
	FVector StartLoc = PlayerCurrentLocation;
	FVector EndLoc = PlayerCurrentLocation + (PlayerCurrentRotation.Vector()*100000.0f);
	GetWorld()->LineTraceSingleByChannel(HitResult, StartLoc, EndLoc, ECC_Visibility);
	
	//Spawn radial force actor 
	FVector SpawnLocation = HitResult.ImpactPoint;
	FRotator SpawnRotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	//DrawDebugSphere(GetWorld(), SpawnLocation, 300.0f, 32, FColor::Red, true, 4.0f, 0, 3.0f);
	FTransform SpawnTransform;
	SpawnTransform.SetLocation(SpawnLocation);
	if(IsValid(BPRadialForce))
	{
		SpawnedRadialForce = GetWorld()->SpawnActor<AActor>(BPRadialForce, SpawnTransform);

	}

	//Disable objects' gravity for grabbing
	FVector GrabLoc = SpawnLocation;
	FRotator GrabRot = SpawnRotation;
	FCollisionShape GrabArea = FCollisionShape::MakeSphere(300.0f);
	bool IsGrab = GetWorld()->SweepMultiByChannel(GrabResults, GrabLoc, GrabLoc, FQuat::Identity, ECC_Visibility, GrabArea);
	
	//Every mesh detected in the grab area will be disabled the gravity
	if(IsGrab)
	{
		for(auto& GrabResult:GrabResults)
		{
			UStaticMeshComponent* RootObject = Cast<UStaticMeshComponent>(GrabResult.GetActor()->GetRootComponent());
			RootObject->SetEnableGravity(false);
		}

	}
	
}

void UPopcornGrab::ReleaseObjects()
{
	//Detroy the radial force few seconds after player release the input
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UPopcornGrab::DestroyRadialForce, 1.5f, false);

	//Enable object's gravity when player release the input
	for(auto& GrabResult:GrabResults)
	{
		UStaticMeshComponent* RootObject = Cast<UStaticMeshComponent>(GrabResult.GetActor()->GetRootComponent());
		if(RootObject)
		{
			RootObject->SetEnableGravity(true);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Cast Failed"));
		}
		
	}
}

void UPopcornGrab::DestroyRadialForce()
{
	SpawnedRadialForce->Destroy();
}

