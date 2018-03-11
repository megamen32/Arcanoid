#include "GravityWireComponent.h"


void UGravityWire::BeginPlay()
{
}

FVector2D VectorTo2D(FVector Vector) {

	return	FVector2D{ Vector.X,Vector.Y };

}
FVector VectorTo3D(FVector2D Vector, float Z = 0) {

	return	FVector{ Vector.X,Vector.Y,Z };

}

void UGravityWire::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	FVector2D force = direction().GetSafeNormal()*(body->Mass*self->Mass) / FVector2D::DistSquared(body->Pos(), self->Pos());
	Mesh->AddForce(VectorTo3D(force));
}
FVector2D UGravityWire::direction()
{
	return body->Pos() - self->Pos();
}

