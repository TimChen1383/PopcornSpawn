// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabbingForce.h"

#include "GameFramework/Character.h"


// Sets default values for this component's properties
UGrabbingForce::UGrabbingForce()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabbingForce::BeginPlay()
{
	Super::BeginPlay();

	//Check if physics handle exist. If not, print error
	CheckPhysicsHandle();

	// ...
	
}


// Called every frame
void UGrabbingForce::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
	if(SpawnedRadialForce)
	{
		FVector PlayerViewpoint;
		FRotator PlayerRotation;
		GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewpoint, PlayerRotation);
		ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		FVector CurrentPlayerLoc = myCharacter->GetActorLocation();
		FVector NewLoc = CurrentPlayerLoc + PlayerRotation.Vector()*600.0f;
		SpawnedRadialForce->SetActorLocation(NewLoc);
	}
	
	

	// ...
}

void UGrabbingForce::GrabObjects()
{
	IsGrabbing = true;
	
	//Check communication failed or success
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Run Grab Object"));

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
	DrawDebugSphere(GetWorld(), SpawnLocation, 300.0f, 32, FColor::Red, true, 4.0f, 0, 3.0f);

	FTransform SpawnTransform;
	SpawnTransform.SetLocation(SpawnLocation);
	if(IsValid(RadialForceBP))
	{
		SpawnedRadialForce = GetWorld()->SpawnActor<AActor>(RadialForceBP, SpawnTransform);
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("BP Radial Force Spawned"));
	}

	//Disable objects' gravity for grabbing
	FVector GrabLoc = SpawnLocation;
	FRotator GrabRot = SpawnRotation;
	FCollisionShape GrabArea = FCollisionShape::MakeSphere(300.0f);
	bool IsGrab = GetWorld()->SweepMultiByChannel(GrabResults, GrabLoc, GrabLoc, FQuat::Identity, ECC_Visibility, GrabArea);

	if(IsGrab)
	{
		//Every mesh been detected in grab area 
		for(auto& GrabResult:GrabResults)
		{
			UStaticMeshComponent* RootObject = Cast<UStaticMeshComponent>(GrabResult.GetActor()->GetRootComponent());
			RootObject->SetEnableGravity(false);
		}
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Garvity Disappeared"));
	}
	
	
}

void UGrabbingForce::ReleaseObjects()
{
	IsGrabbing = false;

	
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
	
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UGrabbingForce::DestroyRadialForce, 1.0f, false);
	
}

void UGrabbingForce::CheckPhysicsHandle()
{
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if(PhysicsHandle)
	{
		//Physics Handle Found
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No Physics Handle Component Found!"));
	}
}

void UGrabbingForce::DestroyRadialForce()
{
	SpawnedRadialForce->Destroy();
}

