#include "DarkRoast.h"

DarkRoast::DarkRoast()
{
	this->cost = 0.99;
	this->description = "��ũ �ν�Ʈ Ŀ��";
}

float DarkRoast::getCost()
{
	return cost;
}

const string& DarkRoast::getDescription()
{
	return description;
}