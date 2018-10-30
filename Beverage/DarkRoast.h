#pragma once
#include "Beverage.h"

//Dark Roast Coffee
class DarkRoast : public Beverage
{
public:
	DarkRoast();
	float getCost() override;
	const string& getDescription() override;
};