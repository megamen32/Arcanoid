// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEffect.generated.h"


class AShapeBase;

UCLASS(ClassGroup = (Physics), meta = (BlueprintSpawnableComponent))
class UPhysicsEffect : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPhysicsEffect();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Render)
		UStaticMeshComponent* Mesh;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
		float strengthModiefer = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
		float duration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
		bool useTimer = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
		AShapeBase *self;
	void TimerEnd();
	FTimerHandle timer;

	// Called when the game starts
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
