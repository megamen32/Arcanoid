// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ShapePrimitive.generated.h"

UCLASS()
class AShapePrimitive : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AShapePrimitive();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector2D pos;
	float mass;

public:
	FVector2D GetPos() const;
	void SetPos(const FVector2D& pos);
	__declspec(property(get = GetPos, put = SetPos)) FVector2D Pos;
	float GetMass() const;
	void SetMass(const float mass);
	__declspec(property(get = GetMass, put = SetMass)) float Mass;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

