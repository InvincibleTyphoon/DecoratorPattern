#include "WhippedCream.h"

WhippedCream::WhippedCream(Beverage* const beverage)
{
	this->beverage = beverage;
	this->cost = 0.1;
	this->description = "Whipped Cream, ";
}

float WhippedCream::getCost()
{
	return cost + beverage->getCost();
}

const string& WhippedCream::getDescription()
{
	cattedString = (description + beverage->getDescription());
	return cattedString;
}