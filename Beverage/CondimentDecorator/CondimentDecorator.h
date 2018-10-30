#pragma once
#include "../Beverage.h"

class CondimentDecorator : public Beverage
{
protected:
	Beverage * beverage;
	string cattedString;
};