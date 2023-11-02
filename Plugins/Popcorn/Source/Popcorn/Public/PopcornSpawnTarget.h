// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "PopcornSpawnTarget.generated.h"

UCLASS()
class POPCORN_API APopcornSpawnTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APopcornSpawnTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//The target's mesh
	UPROPERTY(EditAnywhere, Category="Modular Spawn Target")
	UStaticMeshComponent* HitTarget = nullptr;

	//Sphere collision for detecting overlap event. Drag directly in the level to adjust the location 
	UPROPERTY(EditAnywhere, Category="Modular Spawn Target")
	USphereComponent* HitDetection = nullptr;

	//Set the radius of sphere collision
	UPROPERTY(EditAnywhere, Category="Modular Spawn Target")
	float HitDetecRadius = 30.f;
	
	//Decide the location where ModularSpawn actor spawn. Drag directly in the level to adjust the location 
	UPROPERTY(EditAnywhere, Category="Modular Spawn Target")
	USceneComponent* SpawnPlace = nullptr;

	//Chose the actor we want to spawn. Choose ModularSpawn in this case 
	UPROPERTY(EditAnywhere, Category="Modular Spawn Target")
	TSubclassOf<AActor> ModularSpawnedActor;

private:
	UFUNCTION()
	void TargetHitEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

};
