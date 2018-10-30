#include "HouseBlended.h"



HouseBlended::HouseBlended()
{
	this->cost = 0.89;
	this->description = "하우스 블렌드 커피";
}

const string& HouseBlended::getDescription()
{
	return description;
}

float HouseBlended::getCost()
{
	return cost;
}