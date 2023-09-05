#include "cleaning.h"

cleaning::cleaning()
{
	quantity = 0;
	bill = 0.0;
}

cleaning::cleaning(int q, float f)
{
	quantity = q;
	bill = f;
}

void cleaning::select()
{
	int choice = 0;
	cout << "Enter your choice:" << endl;
	cout << "1. Tissue Paper - Rs. 65 per peice" << endl;
	cout << "2. Liquid Hand Wash - Rs. 300 per piece" << endl;
	cout << "3. Harpic - Rs. 170 per piece" << endl;
	cout << "4. Surf - Rs. 120 " << endl;
	cout << "5. Cleaning Brush - Rs. 120" << endl;
	cout << "6. Air Freshener - Rs. 250 " << endl;
	cout << "7. Soap - Rs. 80 per piece" << endl;
	cout << "8. Face Wash - Rs. 380 per piece" << endl;
	cout << "-----Press 0 to exit---- " << endl;
	cin >> choice;
	if (choice == 1)
	{
		cleaning::setprice(65);
		cleaning::total_bill(65);
	}
	if (choice == 2)
	{
		cleaning::setprice(300);
		cleaning::total_bill(300);
	}
	if (choice == 3)
	{
		cleaning::setprice(170);
		cleaning::total_bill(170);
	}
	if (choice == 4)
	{
		cleaning::setprice(120);
		cleaning::total_bill(120);
	}
	if (choice == 5)
	{
		cleaning::setprice(120);
		cleaning::total_bill(120);
	}
	if (choice == 6)
	{
		cleaning::setprice(250);
		cleaning::total_bill(250);
	}
	if (choice == 7)
	{
		cleaning::setprice(80);
		cleaning::total_bill(80);
	}
	if (choice == 8)
	{
		cleaning::setprice(380);
		cleaning::total_bill(380);
	}
}

float cleaning::getbill()
{
	return bill;
}

float cleaning::total_bill(float f)
{
	float tot = 0.0;
	tot = tot + f;
	bill += tot;
	return tot;
}

