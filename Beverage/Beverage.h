#pragma once
#include<string>

using namespace std;

//The base class for beverages
class Beverage
{
public:
	virtual float getCost() = 0;
	virtual const string& getDescription() = 0;
protected:
	float cost; //$ notation
	string description;
};