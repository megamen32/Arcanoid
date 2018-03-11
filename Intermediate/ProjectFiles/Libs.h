#pragma once
#include "CoreMinimal.h"

FVector2D VectorTo2D(FVector Vector) {

	return	FVector2D{ Vector.X,Vector.Y };

}
FVector VectorTo3D(FVector2D Vector, float Z = 0) {

	return	FVector{ Vector.X,Vector.Y,Z };

}