#pragma once
#include<string>

using namespace std;

class Beverage
{
public:
	virtual float getCost() = 0;
	virtual const string& getDescription() = 0;
protected:
	float cost; //$ Ç¥±â
	string description;
};