#pragma once
#include"item.h"
class cleaning: public item
{
private:
	int quantity;
	float bill;
public:
	cleaning();
	cleaning(int q, float f);
	void select();
	float getbill();
	float total_bill(float f);
};

