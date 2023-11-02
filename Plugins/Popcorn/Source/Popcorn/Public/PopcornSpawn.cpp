// Fill out your copyright notice in the Description page of Project Settings.


#include "PopcornSpawn.h"

// Sets default values
APopcornSpawn::APopcornSpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	//Randomize max generation and spawn timer of each spawner
	RandGeneration = UKismetMathLibrary::RandomIntegerInRange(1, MaxGeneration);
	RandSpawnTime = UKismetMathLibrary::RandomFloatInRange(1, MaxSpawnTime);
	
	//Generate a mesh. Locked to specific mesh
	ModularMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Modular Mesh"));
	ModularMesh->SetCollisionObjectType(ECC_WorldStatic);
	UStaticMesh* MeshToUse = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/Popcorn/Popcorn/SM_popcorn.SM_popcorn")));
	if(MeshToUse && ModularMesh)
	{
		ModularMesh->SetStaticMesh(MeshToUse);
	}
	
	//Set up mesh physics
	ModularMesh->SetupAttachment(RootComponent);
	ModularMesh->SetSimulatePhysics(true);
	ModularMesh->SetLinearDamping(1.0f);
	ModularMesh->SetAngularDamping(1.0f);
	
	SpawnPosition1 = CreateDefaultSubobject<USceneComponent>(TEXT("Position 1"));
	SpawnPosition1->SetRelativeLocation(FVector(25,25,25));
	SpawnPosition1->SetRelativeScale3D(FVector(0.5f,0.5f,0.5f));
	SpawnPosition1->SetupAttachment(ModularMesh);
	SpawnLocations.Add(SpawnPosition1);
	
	SpawnPosition2 = CreateDefaultSubobject<USceneComponent>(TEXT("Position 2"));
	SpawnPosition2->SetRelativeLocation(FVector(-25,25,25));
	SpawnPosition2->SetRelativeScale3D(FVector(0.5f,0.5f,0.5f));
	SpawnPosition2->SetupAttachment(ModularMesh);
	SpawnLocations.Add(SpawnPosition2);
	
	SpawnPosition3 = CreateDefaultSubobject<USceneComponent>(TEXT("Position 3"));
	SpawnPosition3->SetRelativeLocation(FVector(-25,25,-25));
	SpawnPosition3->SetRelativeScale3D(FVector(0.5f,0.5f,0.5f));
	SpawnPosition3->SetupAttachment(ModularMesh);
	SpawnLocations.Add(SpawnPosition3);
	
	SpawnPosition4 = CreateDefaultSubobject<USceneComponent>(TEXT("Position 4"));
	SpawnPosition4->SetRelativeLocation(FVector(25,25,-25));
	SpawnPosition4->SetRelativeScale3D(FVector(0.5f,0.5f,0.5f));
	SpawnPosition4->SetupAttachment(ModularMesh);
	SpawnLocations.Add(SpawnPosition4);
	
	SpawnPosition5 = CreateDefaultSubobject<USceneComponent>(TEXT("Position 5"));
	SpawnPosition5->SetRelativeLocation(FVector(-25,-25,25));
	SpawnPosition5->SetRelativeScale3D(FVector(0.5f,0.5f,0.5f));
	SpawnPosition5->SetupAttachment(ModularMesh);
	SpawnLocations.Add(SpawnPosition5);
	
	SpawnPosition6 = CreateDefaultSubobject<USceneComponent>(TEXT("Position 6"));
	SpawnPosition6->SetRelativeLocation(FVector(-25,-25,-25));
	SpawnPosition6->SetRelativeScale3D(FVector(0.5f,0.5f,0.5f));
	SpawnPosition6->SetupAttachment(ModularMesh);
	SpawnLocations.Add(SpawnPosition6);
	
	SpawnPosition7 = CreateDefaultSubobject<USceneComponent>(TEXT("Position 7"));
	SpawnPosition7->SetRelativeLocation(FVector(25,-25,-25));
	SpawnPosition7->SetRelativeScale3D(FVector(0.5f,0.5f,0.5f));
	SpawnPosition7->SetupAttachment(ModularMesh);
	SpawnLocations.Add(SpawnPosition7);
	
	SpawnPosition8 = CreateDefaultSubobject<USceneComponent>(TEXT("Position 8"));
	SpawnPosition8->SetRelativeLocation(FVector(25,-25,25));
	SpawnPosition8->SetRelativeScale3D(FVector(0.5f,0.5f,0.5f));
	SpawnPosition8->SetupAttachment(ModularMesh);
	SpawnLocations.Add(SpawnPosition8);

}

// Called when the game starts or when spawned
void APopcornSpawn::BeginPlay()
{
	Super::BeginPlay();

	//Create dynamic material for emissive effect. Will need a scalar parameter in material called "HighLight"
	//The the emissive effect only last for 0.2 seconds
	CurrentObjectMaterial = ModularMesh->GetMaterial(0);
	DynamicMaterial = ModularMesh->CreateDynamicMaterialInstance(0,CurrentObjectMaterial);
	DynamicMaterial->SetScalarParameterValue("HighLight", 30.0f);
	ModularMesh->SetMaterial(0,DynamicMaterial);
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &APopcornSpawn::DynamicMaterialControl, 0.2f, false);

	if(CurrentGeneration < 1)
	{
		StartSplit();
	}
	else
	{
		FVector RandomVector = FMath::VRand();
		ModularMesh->AddImpulse(RandomVector*ImpulseStrength, NAME_None, true);
		StartSplit();
	}
	
}

// Called every frame
void APopcornSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APopcornSpawn::StartSplit()
{
	//New Actor spawned in next generation should have an increased generation number. The number will be pass to next generation
	CurrentGeneration = CurrentGeneration + 1;

	//Disable the physics of old parent mesh to avoid collision error
	if(CurrentGeneration <= RandGeneration)
	{
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &APopcornSpawn::DisableParentMesh, RandSpawnTime, false);
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("%i = Current Generation"), CurrentGeneration));
		
	}
}

void APopcornSpawn::DisableParentMesh()
{
	ModularMesh->SetSimulatePhysics(false);
	ModularMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ModularMesh->SetCollisionObjectType(ECC_WorldStatic);
	SpawnMeshes();
}

void APopcornSpawn::SpawnMeshes()
{
	for(USceneComponent* SpawnLocation : SpawnLocations)
	{
		//Get current components' location, rotation amd scale
		FVector ObjectScale = SpawnLocation->GetRelativeScale3D();
		FVector ObjectLocation = SpawnLocation->GetComponentLocation();
		FRotator ObjectRotation = SpawnLocation->GetRelativeRotation();
		FVector ActorScale = this->GetActorScale3D();
		
		//Use deferred spawn to pass the generation value to the new spawned actor so it won't start over again
		APopcornSpawn* SpawnedActor = GetWorld()->SpawnActorDeferred<APopcornSpawn>(APopcornSpawn::StaticClass(), FTransform());
		SpawnedActor->SetActorLocationAndRotation(ObjectLocation, ObjectRotation);
		SpawnedActor->SetActorScale3D(FVector(ObjectScale*ActorScale));
		SpawnedActor->CurrentGeneration = CurrentGeneration;
		SpawnedActor->FinishSpawning(FTransform());

		//The generation after 3 will not spawn Niagara particle
		if(CurrentGeneration <= 3)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), SpawnParticle, GetActorLocation());
		}
		
	}

	//Destroy the original cube actor after new generation has been spawned
	Destroy();
}

void APopcornSpawn::DynamicMaterialControl()
{
	DynamicMaterial->SetScalarParameterValue("HighLight", 0.0f);
}





