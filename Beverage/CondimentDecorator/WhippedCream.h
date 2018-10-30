#pragma once
#include "CondimentDecorator.h"

//Whipped Cream Condiment
class WhippedCream : public CondimentDecorator
{
public:
	WhippedCream(Beverage* const beverage);
	float getCost() override;
	const string& getDescription() override;
};

