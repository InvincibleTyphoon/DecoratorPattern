#include "DarkRoast.h"

DarkRoast::DarkRoast()
{
	this->cost = 0.99;
	this->description = "Dark Roast Coffee";
}

float DarkRoast::getCost()
{
	return cost;
}

const string& DarkRoast::getDescription()
{
	return description;
}