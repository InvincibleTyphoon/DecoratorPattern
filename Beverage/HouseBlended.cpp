#include "HouseBlended.h"



HouseBlended::HouseBlended()
{
	this->cost = 0.89;
	this->description = "House Blended Coffee";
}

const string& HouseBlended::getDescription()
{
	return description;
}

float HouseBlended::getCost()
{
	return cost;
}