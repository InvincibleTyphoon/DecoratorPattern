#include "SoyMilk.h"

SoyMilk::SoyMilk(Beverage* const beverage)
{
	this->beverage = beverage;
	this->cost = 0.15;
	this->description = "Soy Milk Latte,";
}

float SoyMilk::getCost()
{
	return cost + beverage->getCost();
}
const string& SoyMilk::getDescription()
{
	cattedString = description + beverage->getDescription();
	return cattedString;
}