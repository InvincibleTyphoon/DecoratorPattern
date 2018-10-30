#pragma once
#include "Beverage.h"

//House Blended Coffee
class HouseBlended : public Beverage
{
public:
	HouseBlended();
	
	const string& getDescription() override;
	float getCost() override;
};

