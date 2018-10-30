#pragma once
#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
	DarkRoast();
	float getCost() override;
	const string& getDescription() override;
};