
#pragma once

#include "CoreMinimal.h";
#include "Runtime/Engine/Classes/Engine/World.h"
#include "..\..\Source\Arcanoid\Private\ShapeBase.h"

using APrimitive=AShapeBase;

USTRUCT()
struct Effect
{
	virtual FVector2D Evaluate() = 0;
	Effect(float strength_modifier = 1.0f,bool _active=true) :StrengthModifier(strength_modifier),active(_active) {};
	Effect(const Effect& other) = default;
	Effect(Effect&& other) noexcept = default;
	Effect& operator=(const Effect& other) = default;
	Effect& operator=(Effect&& other) noexcept = default;
	void SetActive(bool _active){active=_active;}
	~Effect(){};
	Effect(){};
protected:
	float StrengthModifier = 1;
	bool active=true;
};
USTRUCT()
struct TwoBodyEffect :Effect
{
	FVector2D direction() { return body.GetPos() - self.GetPos(); }

	TwoBodyEffect( APrimitive& body,  APrimitive& self, float strength_modifier = 1.0f,bool active=true,bool isdualApply)
		: Effect(strength_modifier,active),
		body(body),
		self(self),
		isDualApply(isdualApply)
	{
	}

protected:
	APrimitive &body;
	APrimitive &self;
	bool isDualApply=false;
};
USTRUCT()
struct GravityWire :TwoBodyEffect
{
	FVector2D Evaluate() override;

	GravityWire( APrimitive& body,  APrimitive& self, float strength_modifier=1.0f,bool active=true)
		: TwoBodyEffect(body, self, strength_modifier,active)
	{
	}
protected:
	

};
USTRUCT()
struct RopeWire :TwoBodyEffect
{
protected:
	float maxDistance = 1;
	float minDistance = 0;
public:
	RopeWire( APrimitive& body,  APrimitive& self, float strength_modifier=1.0f, float max_distance=100.0f,
		float min_distance=0,bool _active=true)
		: TwoBodyEffect(body, self, strength_modifier,_active),
		maxDistance(max_distance),
		minDistance(min_distance)
	{
	}
	FVector2D Evaluate() override;
};




