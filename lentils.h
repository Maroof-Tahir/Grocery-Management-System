#pragma once
#include "item.h"
class lentils : public item
{
private:
	int quantity;
	float bill;

public:
	lentils();
	lentils(int q,float f);
	void select();
	float getbill();

	float total_bill(float f);

	
};

