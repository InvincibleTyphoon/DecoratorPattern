#pragma oncec;
#include "Beverage.h"

//Espresso
class Espresso : public Beverage
{
public:
	Espresso();
	float getCost() override;
	const string& getDescription() override;
};