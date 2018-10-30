#include "DarkRoast.h"

DarkRoast::DarkRoast()
{
	this->cost = 0.99;
	this->description = "다크 로스트 커피";
}

float DarkRoast::getCost()
{
	return cost;
}

const string& DarkRoast::getDescription()
{
	return description;
}