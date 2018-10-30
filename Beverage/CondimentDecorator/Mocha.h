#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage* const beverage);
	float getCost() override;
	const string& getDescription() override;
};