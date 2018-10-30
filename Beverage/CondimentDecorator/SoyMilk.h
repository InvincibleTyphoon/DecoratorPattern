#include "CondimentDecorator.h"

//Soy Milk Latte Condiment
class SoyMilk : public CondimentDecorator
{
public:
	SoyMilk(Beverage* const beverage);
	float getCost() override;
	const string& getDescription() override;
};