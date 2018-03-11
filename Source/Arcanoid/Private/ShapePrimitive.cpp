// Fill out your copyright notice in the Description page of Project Settings.

#include "ShapePrimitive.h"


// Sets default values
AShapePrimitive::AShapePrimitive()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShapePrimitive::BeginPlay()
{
	Super::BeginPlay();
	
}

FVector2D AShapePrimitive::GetPos() const
{
	return pos;
}

void AShapePrimitive::SetPos(const FVector2D& pos)
{
	this->pos = pos;
}

float AShapePrimitive::GetMass() const
{
	return mass;
}

void AShapePrimitive::SetMass(const float mass)
{
	this->mass = mass;
}

// Called every frame
void AShapePrimitive::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

// Called to bind functionality to input
void AShapePrimitive::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

