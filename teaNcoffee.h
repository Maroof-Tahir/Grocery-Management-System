#pragma once
#include"item.h"
class teaNcoffee: public item
{
private:
	int quantity;
	float bill;

public:
	teaNcoffee();
	teaNcoffee(int q, float f);
	void select();
	float getbill();

	float total_bill(float f);

};

