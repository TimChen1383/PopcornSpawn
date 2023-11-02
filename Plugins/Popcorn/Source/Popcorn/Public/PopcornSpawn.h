// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "NiagaraComponent.h"
#include "Engine/StaticMeshActor.h"
#include "NiagaraFunctionLibrary.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "PopcornSpawn.generated.h"

UCLASS()
class POPCORN_API APopcornSpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APopcornSpawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//The mesh we want to spawn
	UPROPERTY(EditAnywhere, Category="ModularSpawn")
	UStaticMeshComponent* ModularMesh;
	
	//The max generation of each spawner. The actual value will be randomize between 1 and this max value
	int MaxGeneration = 3;

	//The max generation of each spawner. The actual value will be randomize between 1 and this max value
	float MaxSpawnTime = 2.0f;

	//The initial strength of actors birth
	UPROPERTY(EditAnywhere, Category="ModularSpawn")
	float ImpulseStrength = 500.0f;
	
	//Attach the Niagara system we want to emit when actor spawned. Locked to specific Niagara system
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ModularSpawn")
	UNiagaraSystem* SpawnParticle = Cast<UNiagaraSystem>(StaticLoadObject(UNiagaraSystem::StaticClass(), NULL, TEXT("/Popcorn/Popcorn/NI_Popcorn.NI_Popcorn")));;


private:	
	//Modular spawn locations
	USceneComponent* SpawnPosition1;
	
	USceneComponent* SpawnPosition2;
	
	USceneComponent* SpawnPosition3;
	
	USceneComponent* SpawnPosition4;
	
	USceneComponent* SpawnPosition5;
	
	USceneComponent* SpawnPosition6;
	
	USceneComponent* SpawnPosition7;
	
	USceneComponent* SpawnPosition8;

	TArray<USceneComponent*> SpawnLocations;
	
	void StartSplit();

	void DisableParentMesh();
	
	void SpawnMeshes();

	UMaterialInterface* CurrentObjectMaterial = nullptr;

	UMaterialInstanceDynamic* DynamicMaterial = nullptr;

	void DynamicMaterialControl();

	float RandSpawnTime;
	
	int RandGeneration = 3;

	int CurrentGeneration;
};
