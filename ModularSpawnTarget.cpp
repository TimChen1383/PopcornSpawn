// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularSpawnTarget.h"

#include "ModularSpawn.h"

// Sets default values
AModularSpawnTarget::AModularSpawnTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HitTarget = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Hit Target"));
	HitDetection = CreateAbstractDefaultSubobject<USphereComponent>(TEXT("Hit Detection"));
	SpawnPlace = CreateAbstractDefaultSubobject<USceneComponent>(TEXT("Spawn Location"));
	HitTarget->SetupAttachment(RootComponent);
	SpawnPlace->SetupAttachment(HitTarget);
	HitDetection->SetupAttachment(HitTarget);
	HitDetection->SetSphereRadius(30.0f);
	//HitDetection->OnComponentBeginOverlap.AddDynamic(this, &AModularSpawnTarget::TargetHitEvent);
	HitDetection->OnComponentHit.AddDynamic(this, &AModularSpawnTarget::TargetHitEvent);

}

// Called when the game starts or when spawned
void AModularSpawnTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AModularSpawnTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AModularSpawnTarget::TargetHitEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Target Hit"));

	FVector SpawnLocation = SpawnPlace->GetComponentLocation();
	FRotator SpawnRotation = SpawnPlace->GetComponentRotation();
	FActorSpawnParameters SpawnInfo;
	GetWorld()->SpawnActor<AModularSpawn>(SpawnLocation, SpawnRotation, SpawnInfo);
}

