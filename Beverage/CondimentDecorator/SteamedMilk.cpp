#include "SteamedMilk.h"

SteamedMilk::SteamedMilk(Beverage* const beverage)
{
	this->beverage = beverage;
	this->cost = 0.1;
	this->description = "Latte , ";
}

float SteamedMilk::getCost()
{
	return cost + beverage->getCost();
}

const string& SteamedMilk::getDescription()
{
	cattedString = (description + beverage->getDescription());
	return cattedString;
}