// Fill out your copyright notice in the Description page of Project Settings.


#include "PopcornSpawnTarget.h"

// Sets default values
APopcornSpawnTarget::APopcornSpawnTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Basic mesh and parent setup 
	HitTarget = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Hit Target"));
	HitDetection = CreateAbstractDefaultSubobject<USphereComponent>(TEXT("Hit Detection"));
	SpawnPlace = CreateAbstractDefaultSubobject<USceneComponent>(TEXT("Spawn Location"));
	HitTarget->SetupAttachment(RootComponent);
	SpawnPlace->SetupAttachment(HitTarget);
	HitDetection->SetupAttachment(HitTarget);
	HitDetection->SetSphereRadius(HitDetecRadius);
	
	//Create overlap trigger event
	HitDetection->OnComponentHit.AddDynamic(this, &APopcornSpawnTarget::TargetHitEvent);

}

// Called when the game starts or when spawned
void APopcornSpawnTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APopcornSpawnTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APopcornSpawnTarget::TargetHitEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	//When target hit, change material color. In material, we need to setup a scalar parameter called "SpawnStart"
	UMaterialInterface* TargetMaterial = HitTarget->GetMaterial(0);
	if(TargetMaterial)
	{
		auto DynamicMaterial = HitTarget->CreateDynamicMaterialInstance(0, TargetMaterial);
		DynamicMaterial->SetScalarParameterValue("SpawnStart", 0);
		HitTarget->SetMaterial(0, DynamicMaterial);
	}

	//Spawn actor ModularSpawnedActor at SpawnPlace location
	FVector SpawnLocation = SpawnPlace->GetComponentLocation();
	FRotator SpawnRotation = SpawnPlace->GetComponentRotation();
	FActorSpawnParameters SpawnInfo;
	GetWorld()->SpawnActor<AActor>(ModularSpawnedActor, SpawnLocation, SpawnRotation);
}

