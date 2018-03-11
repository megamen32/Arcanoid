#include "Effect.h"



template <typename T>
void Effect<T>::SetValue(T& _value)
{
	value = _value;
}



template <typename T>
void Effect<T>::ToggleActive(bool _active)
{
	active=_active;
}

FVector2D GravityWire::Evaluate()
{
	FVector2D result = (body.GetPos() - self.GetPos())*
		StrengthModifier*(body.GetMass()*self.GetMass()) /
		FVector2D::DistSquared(body.GetPos(), self.GetPos());
	self.AddForce(result);
	if(isDualApply)
	{
		body.AddForce(-result);
	}
	return result;
}


FVector2D RopeWire::Evaluate()
{
	float dist=direction().Size();
	float modifier(1);
	if(dist>maxDistance)
	{
		modifier+=(dist-maxDistance);
	}
	if(dist<minDistance)
	{
		modifier=-modifier;
	}
	FVector2D result=direction()* StrengthModifier*modifier;
	self.AddForce(result);
	if(isDualApply)
	{
		body.AddForce(-result);
	}
	return result;
}

