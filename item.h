#pragma once
#include<iostream>
using namespace std;

class item
{
private:
	float price;


public:
	item();
	void setprice(float pp);
	float getprice();
	virtual float total_bill(float f) = 0;

};

