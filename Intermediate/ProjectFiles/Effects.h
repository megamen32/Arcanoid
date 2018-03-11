#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShapeBase.generated.h"
#include<vector>


UCLASS()
class Effect
{
public:
	Effect(float _Duration );
	~Effect();
	float Duration;
	virtual void Apply()=0;
private:

};
enum EffectOP{add,mul,div};
UCLASS()
class SelfUpdatingEffect:Effect
{
public:
	SelfUpdatingEffect();
	~SelfUpdatingEffect();
	void Apply();
	union OP {
		FVector2D &Force;
		float &scalar;
		EffectOP operation;
	};
private:
	std::vector<OP> expresion;
};

SelfUpdatingEffect::SelfUpdatingEffect()
{
}

SelfUpdatingEffect::~SelfUpdatingEffect()
{
	expresion.clear();
}

inline void SelfUpdatingEffect::Apply()
{
	for (auto val : values) {

	}
}



Effect::Effect(float _Duration):Duration(_Duration)
{
}

Effect::~Effect()
{
}