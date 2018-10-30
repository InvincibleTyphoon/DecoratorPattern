#pragma once
#include "Beverage.h"

class HouseBlended : public Beverage
{
public:
	HouseBlended();
	
	const string& getDescription() override;
	float getCost() override;
};

