// Fill out your copyright notice in the Description page of Project Settings.

#include "ShapeBase.h"


// Sets default values
AShapeBase::AShapeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
FVector2D VectorTo2D(FVector Vector) {

	return	FVector2D{ Vector.X,Vector.Y };

}
FVector VectorTo3D(FVector2D Vector, float Z = 0) {

	return	FVector{ Vector.X,Vector.Y,Z };

}
FVector2D AShapeBase::Pos() const
{
	return VectorTo2D(GetActorLocation());
}



// Called when the game starts or when spawned
void AShapeBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShapeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

}

