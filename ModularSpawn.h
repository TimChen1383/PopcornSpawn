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

#include "ModularSpawn.generated.h"

UCLASS()
class UECPP_PRACTICE_API AModularSpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModularSpawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="ModularSpawn")
	UStaticMeshComponent* ModularMesh;

	//Spawn points
	UPROPERTY(VisibleDefaultsOnly, Category="ModularSpawn")
	USceneComponent* SpawnPosition1;
	
	UPROPERTY(VisibleDefaultsOnly, Category="ModularSpawn")
	USceneComponent* SpawnPosition2;

	UPROPERTY(VisibleDefaultsOnly, Category="ModularSpawn")
	USceneComponent* SpawnPosition3;

	UPROPERTY(VisibleDefaultsOnly, Category="ModularSpawn")
	USceneComponent* SpawnPosition4;

	UPROPERTY(VisibleDefaultsOnly, Category="ModularSpawn")
	USceneComponent* SpawnPosition5;

	UPROPERTY(VisibleDefaultsOnly, Category="ModularSpawn")
	USceneComponent* SpawnPosition6;

	UPROPERTY(VisibleDefaultsOnly, Category="ModularSpawn")
	USceneComponent* SpawnPosition7;

	UPROPERTY(VisibleDefaultsOnly, Category="ModularSpawn")
	USceneComponent* SpawnPosition8;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "ModularSpawn")
	TArray<USceneComponent*> SpawnLocations;

	void StartSplit();

	void DisableParentCube();
	
	void SpawnCubes();

	UPROPERTY(VisibleDefaultsOnly, Category="ModularSpawn")
	int MaxGeneration ;

	UPROPERTY(EditAnywhere, Category="ModularSpawn")
	bool IsFirstCube = false;

	float ImpulseStrength = 500.0f;

	//this should set the variable "instance editable" and "expose to spawn"
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ModularSpawn", meta = (ExposeOnSpawn=true))
	int CurrentGeneration;

	UMaterialInterface* CurrentObjectMaterial = nullptr;

	UMaterialInstanceDynamic* DynamicMaterial = nullptr;

	void DynamicMaterialControl();

	float NextGenSpawnTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ModularSpawn")
	UNiagaraSystem* SpawnParticle = Cast<UNiagaraSystem>(StaticLoadObject(UNiagaraSystem::StaticClass(), NULL, TEXT("/Game/SpawnCube/NI_Spawn.NI_Spawn")));

	UPROPERTY(EditAnywhere, Category="ModularSpawn")
	UStaticMeshComponent* HitTarget = nullptr;

	UPROPERTY(EditAnywhere, Category="ModularSpawn")
	USphereComponent* HitDetectSphere = nullptr;
	
};
