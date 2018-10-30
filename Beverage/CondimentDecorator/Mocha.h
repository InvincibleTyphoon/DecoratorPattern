#include "CondimentDecorator.h"

//Mocha condiment
class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage* const beverage);
	float getCost() override;
	const string& getDescription() override;
};