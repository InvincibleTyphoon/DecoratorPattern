#pragma once
#include "Beverage.h"

//Decaffeine Coffee
class Decaffeine : public Beverage
{
public:
	Decaffeine();
	
	float getCost() override;
	const string& getDescription() override;
};

