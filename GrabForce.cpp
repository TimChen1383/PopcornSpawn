// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabForce.h"

#include "Components/SphereComponent.h"
#include "PhysicsEngine/RadialForceActor.h"

// Sets default values
AGrabForce::AGrabForce()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGrabForce::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGrabForce::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrabForce::GrabObjects()
{
	//Check communication failed or success
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Run Grab Object"));

	//Run line trace to find the spawn location of radial force
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
		GetWorld()->SpawnActor<AActor>(RadialForceBP, SpawnTransform);
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("BP Radial Force Spawned"));
	}
	
}

