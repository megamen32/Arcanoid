// Fill out your copyright notice in the Description page of Project Settings.

#include "PhysicsEffect.h"
#include "ShapeBase.h"


// Sets default values for this component's properties
UPhysicsEffect::UPhysicsEffect()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
FVector2D VectorTo2D(FVector Vector) {

	return	FVector2D{ Vector.X,Vector.Y };

}
FVector VectorTo3D(FVector2D Vector, float Z = 0) {

	return	FVector{ Vector.X,Vector.Y,Z };

}

void UPhysicsEffect::TimerEnd()
{
	GetWorld()->GetTimerManager().ClearTimer(timer);

	SetActive(false);
	DestroyComponent(this);
}

// Called when the game starts
void UPhysicsEffect::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(timer, this, &UPhysicsEffect::TimerEnd, 1.0f, true);
	// ...

}


// Called every frame
void UPhysicsEffect::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UWorld *World = GetWorld();

	// ...
}

