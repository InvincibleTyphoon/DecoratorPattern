#include "Decaffeine.h"



Decaffeine::Decaffeine()
{
	this->cost = 1.05;
	this->description = "��ī���� Ŀ��";
}


float Decaffeine::getCost()
{
	return cost;
}

const string& Decaffeine::getDescription()
{
	return description;
}