#include "Mocha.h"

Mocha::Mocha(Beverage* const beverage)
{
	this->beverage = beverage;
	this->cost = 0.2;
	this->description = "¸ðÄ«, ";
}

float Mocha::getCost()
{
	return cost + beverage->getCost();
}
const string& Mocha::getDescription()
{
	cattedString = description + beverage->getDescription();
	return cattedString;
}