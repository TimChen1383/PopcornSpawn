// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "GrabbingForce.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UECPP_PRACTICE_API UGrabbingForce : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabbingForce();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void GrabObjects();

	UFUNCTION(BlueprintCallable)
	void ReleaseObjects();

	UPROPERTY(EditAnywhere, Category="Grab Force")
	TSubclassOf<AActor> RadialForceBP;
	
	UPhysicsHandleComponent* PhysicsHandle = nullptr;

	void CheckPhysicsHandle();

	AActor* SpawnedRadialForce = nullptr;

	void DestroyRadialForce();
	
	bool IsGrabbing = false;

	TArray<FHitResult> GrabResults;

};


