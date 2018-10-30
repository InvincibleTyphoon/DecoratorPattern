#include "Decaffeine.h"



Decaffeine::Decaffeine()
{
	this->cost = 1.05;
	this->description = "Decaffeine Coffee";
}


float Decaffeine::getCost()
{
	return cost;
}

const string& Decaffeine::getDescription()
{
	return description;
}