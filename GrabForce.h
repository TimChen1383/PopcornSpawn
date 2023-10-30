// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrabForce.generated.h"

UCLASS()
class UECPP_PRACTICE_API AGrabForce : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrabForce();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void GrabObjects();

	UPROPERTY(EditAnywhere, Category="Grab Force")
	TSubclassOf<AActor> RadialForceBP;
	

};
