#pragma once
#include "item.h"
class toiletries : public item
{
private:
	int quantity;
	float bill;

public:
	toiletries();
	toiletries(int q, float f);
	void select();
	float getbill();
	float total_bill(float f);

};

