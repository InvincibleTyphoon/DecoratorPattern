#include <iostream>
#include "Beverage/Beverage.h"
#include "Beverage/DarkRoast.h"
#include "Beverage/Decaffeine.h"
#include "Beverage/Espresso.h"
#include "Beverage/HouseBlended.h"
#include "Beverage/CondimentDecorator/CondimentDecorator.h"
#include "Beverage/CondimentDecorator/Mocha.h"
#include "Beverage/CondimentDecorator/SoyMilk.h"
#include "Beverage/CondimentDecorator/SteamedMilk.h"
#include "Beverage/CondimentDecorator/WhippedCream.h"


using namespace std;

void describeMenu(Beverage * beverage)
{
	cout << "Description : " << beverage->getDescription() << endl;
	cout << "Cost : " << beverage->getCost() << endl;
}

int main()
{
	Beverage * beverage1 = new DarkRoast();
	describeMenu(beverage1);
	delete beverage1;

	Beverage * beverage2 = new Decaffeine();
	beverage2 = new SoyMilk(beverage2);
	describeMenu(beverage2);
	delete beverage2;

	Beverage * beverage3 = new Espresso();
	beverage3 = new Mocha(beverage3);
	beverage3 = new WhippedCream(beverage3);
	describeMenu(beverage3);
	delete beverage3;


	Beverage * beverage4 = new HouseBlended();
	beverage4 = new SteamedMilk(beverage4);
	beverage4 = new SteamedMilk(beverage4);
	beverage4 = new Mocha(beverage4);
	describeMenu(beverage4);
	delete beverage4;

	

	

	return 0;
}