#include "Decaffeine.h"



Decaffeine::Decaffeine()
{
	this->cost = 1.05;
	this->description = "디카페인 커피";
}


float Decaffeine::getCost()
{
	return cost;
}

const string& Decaffeine::getDescription()
{
	return description;
}