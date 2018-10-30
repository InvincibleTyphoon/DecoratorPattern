#pragma once
#include "Beverage.h"

class Decaffeine : public Beverage
{
public:
	Decaffeine();
	
	float getCost() override;
	const string& getDescription() override;
};

