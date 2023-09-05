#include "snacks.h"

snacks::snacks()
{
	quantity = 0;
	bill = 0.0;
}

snacks::snacks(int q, float f)
{
	quantity = q;
	bill = f;
}

void snacks::select()
{
	int choice = 0;
	cout << "Enter your choice:" << endl;
	cout << "1. Chocolate - Rs. 120" << endl;
	cout << "2. Chips - Rs. 50" << endl;
	cout << "3. CoCoMo - Rs. 120" << endl;
	cout << "4. Biscuits - Rs. 20" << endl;
	cout << "5. Nimko - Rs. 120 " << endl;
	cout << "6. Cupcake - Rs. 70 " << endl;
	cout << "7. Chewing Gum - Rs. 2 " << endl;
	cout << "8. Candy Jumbo Pack - Rs. 180 " << endl;
	cout << "-----Press 0 to exit---- " << endl;
	cin >> choice;
	if (choice == 1)
	{
		snacks::setprice(120);
		snacks::total_bill(120);
	}
	if (choice == 2)
	{
		snacks::setprice(50);
		snacks::total_bill(50);
	}
	if (choice == 3)
	{
		snacks::setprice(120);
		snacks::total_bill(120);
	}
	if (choice == 4)
	{
		snacks::setprice(20);
		snacks::total_bill(20);
	}
	if (choice == 5)
	{
		snacks::setprice(120);
		snacks::total_bill(120);
	}
	if (choice == 6)
	{
		snacks::setprice(70);
		snacks::total_bill(70);
	}
	if (choice == 7)
	{
		snacks::setprice(2);
		snacks::total_bill(2);
	}
	if (choice == 8)
	{
		snacks::setprice(180);
		snacks::total_bill(180);
	}
	if (choice == 0)
	{
		return;
	}

}

float snacks::getbill()
{
	return bill;
}

float snacks::total_bill(float f)
{
	float tot = 0.0;
	tot = tot + f;
	bill += tot;
	return tot;
}