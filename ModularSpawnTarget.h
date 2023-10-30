// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "ModularSpawnTarget.generated.h"

UCLASS()
class UECPP_PRACTICE_API AModularSpawnTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModularSpawnTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="ModularSpawnTarget")
	UStaticMeshComponent* HitTarget = nullptr;

	UPROPERTY(EditAnywhere, Category="ModularSpawnTarget")
	USphereComponent* HitDetection = nullptr;

	UPROPERTY(EditAnywhere, Category="ModularSpawnTarget")
	USceneComponent* SpawnPlace = nullptr; 

	UFUNCTION()
	void TargetHitEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

};
