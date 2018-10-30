#include "Espresso.h"

Espresso::Espresso()
{
	this->cost = 1.99;
	this->description = "에스프레소";
}

float Espresso::getCost()
{
	return cost;
}

const string& Espresso::getDescription()
{
	return description;
}