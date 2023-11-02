// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "PopcornGrab.generated.h"


UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class POPCORN_API UPopcornGrab : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPopcornGrab();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Exposed GrabObject function for player to trigger
	UFUNCTION(BlueprintCallable, Category="Grabbing Force")
	void GrabObjects();

	//Exposed ReleaseObject function for player to trigger
	UFUNCTION(BlueprintCallable, Category="Grabbing Force")
	void ReleaseObjects();

	//Chose the actor we want to spawn. Choose RadialForce blueprint in this case 
	UPROPERTY(EditAnywhere, Category="Grabbing Force")
	TSubclassOf<AActor> BPRadialForce;

	//Offset the center of radial force
	UPROPERTY(EditAnywhere, Category="Grabbing Force")
	FVector ForcePlayerOffset = FVector(0,0,150.0f);

private:
	AActor* SpawnedRadialForce = nullptr;

	void DestroyRadialForce();

	TArray<FHitResult> GrabResults;
		
};
