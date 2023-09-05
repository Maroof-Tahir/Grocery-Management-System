#include "lentils.h"

lentils::lentils()
{
	setprice(200);
	quantity = 0;
	bill = 0.0;
}

lentils::lentils(int q,float f)
{
	quantity = q;
	bill = f;
}



void lentils::select()
{ 
	int choice = 0;
	cout << "Enter your choice:" << endl;
	cout << "1. Daal channa - Rs. 180 per kg" << endl;
	cout << "2. Daal Masoor - Rs. 160 per kg" << endl;
	cout << "3. Daal Moong - Rs. 170 per kg" << endl;
	cout << "4. Daal Maash - Rs. 240 per kg" << endl;
	cout << "5. Daal Massar - Rs. 180 per kg" << endl;
	cout << "-----Press 0 to exit---- " << endl;
	cin >> choice;
	if (choice == 1)
	{
		lentils::setprice(180);
		lentils::total_bill(180);
	}
	if (choice == 2)
	{
		lentils::setprice(160);
		lentils::total_bill(160);
	}
	if (choice == 3)
	{
		lentils::setprice(170);
		lentils::total_bill(170);
	}
	if (choice == 4)
	{
		lentils::setprice(240);
		lentils::total_bill(240);
	}
	if (choice == 5)
	{ 
		lentils::setprice(180);
		lentils::total_bill(180);
	}
	if (choice == 0)
	{
		return;
	}


}

float lentils::getbill()
{
	return bill;
}

float lentils::total_bill(float f)
{
	float tot = 0.0;
	tot = tot + f;
	bill += tot;
	return tot;
}