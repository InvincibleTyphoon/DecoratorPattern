#pragma once
#include "CondimentDecorator.h"
class SteamedMilk : public CondimentDecorator
{
public:
	SteamedMilk(Beverage* const beverage);
	float getCost() override;
	const string& getDescription() override;
};

