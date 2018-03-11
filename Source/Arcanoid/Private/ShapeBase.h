// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define eps 0.001f
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <cassert>
#include <vector>
#include "ShapeBase.generated.h"


class PhysicsEffect;

UCLASS()
class AShapeBase : public AActor
{
	GENERATED_BODY()


public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Render)
		class UStaticMeshComponent* StaticMesh;


	// Sets default values for this actor's properties
	AShapeBase();

	UFUNCTION()
		void AddForce(FVector2D newForce)
	{
		StaticMesh->AddForce(FVector(newForce, 0));
	}

	FVector2D Pos() const;
	float GetMass() const
	{
		return StaticMesh->GetMass();
	};
	void SetMass(const float _mass)
	{
		StaticMesh->SetMassOverrideInKg(NAME_None, _mass);
	}
	__declspec(property(get = GetMass, put = SetMass)) float Mass;

protected:
	float mass;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
struct Ray {

	FVector2D direction;
	FVector2D position;
	FVector2D fullPos()
	{
		return direction + position;
	}
	Ray(FVector2D _position, FVector2D _direction) {
		direction = _direction;
		position = _position;
	}
	bool Contain(FVector2D pos)
	{
		return (eps >= abs(FVector2D::CrossProduct(pos - position, direction)));
	}
};
struct Line {
	FVector2D point1;
	FVector2D point2;
	float distance() { return FVector2D::Distance(point2, point1); }
	float angle() { return FVector2D::DotProduct(point1, point2) / distance(); }

};