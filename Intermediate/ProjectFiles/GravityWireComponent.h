#pragma once
// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UGravityWire.generated.h"



UCLASS(ClassGroup = (Physics), meta = (BlueprintSpawnableComponent))
class UGravityWire : public UPhysicsEffect
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGravityWire();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
		AShapeBase *body;
	inline FVector2D direction();
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};

