#pragma once
#include "../Beverage.h"

//Decorator interface for Beverage
class CondimentDecorator : public Beverage
{
protected:
	Beverage * beverage;
	string cattedString;	//string for returning the concatenated string.
							//it's not a good way to return new object in c++, because it's not deleted automatically.
};