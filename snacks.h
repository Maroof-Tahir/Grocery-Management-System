#pragma once
#include "item.h"
class snacks :public item
{
private:
	int quantity;
	float bill;

public:
	snacks();
	snacks(int q, float f);
	void select();
	float getbill();
	float total_bill(float f);
};

