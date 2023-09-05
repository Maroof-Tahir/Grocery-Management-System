#include "item.h"

item::item()
{
	price = 0;
}

void item::setprice(float pp)
{
	price = pp;
}

float item::getprice()
{
	return price;
}

float item::total_bill(float f)
{
	float tot = 0.0;
	tot = tot + f;
	return tot;
}
