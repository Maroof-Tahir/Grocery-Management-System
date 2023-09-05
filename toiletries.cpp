#include "toiletries.h"

toiletries::toiletries()
{
	quantity = 0;
	bill = 0.0;
}

toiletries::toiletries(int q, float f)
{
	quantity = q;
	bill = f;
}

void toiletries::select()
{
	int choice = 0;
	cout << "Enter your choice:" << endl;
	cout << "1. Tissue Paper - Rs. 65 per peice" << endl;
	cout << "2. Liquid Hand Wash - Rs. 300 per piece" << endl;
	cout << "3. Harpic - Rs. 170 per piece" << endl;
	cout << "4. Shower Gel - Rs. 340 per piece" << endl;
	cout << "5. Shampoo - Rs. 380 per piece" << endl;
	cout << "6. Conditioner - Rs. 380 per piece" << endl;
	cout << "7. Soap - Rs. 80 per piece" << endl;
	cout << "8. Face Wash - Rs. 380 per piece" << endl;
	cout << "-----Press 0 to exit---- " << endl;
	cin >> choice;
	if (choice == 1)
	{
		toiletries::setprice(65);
		toiletries::total_bill(65);
	}
	if (choice == 2)
	{
		toiletries::setprice(300);
		toiletries::total_bill(300);
	}
	if (choice == 3)
	{
		toiletries::setprice(170);
		toiletries::total_bill(170);
	}
	if (choice == 4)
	{ 
		toiletries::setprice(340);
		toiletries::total_bill(340);
	}
	if (choice == 5)
	{
		toiletries::setprice(380);
		toiletries::total_bill(380);
	}
	if (choice == 6)
	{
		toiletries::setprice(380);
		toiletries::total_bill(380);
	}
	if (choice == 7)
	{
		toiletries::setprice(80);
		toiletries::total_bill(80);
	}
	if (choice == 8)
	{
		toiletries::setprice(380);
		toiletries::total_bill(380);
	}

	if (choice == 0)
	{
		return;
	}


}

float toiletries::getbill()
{
	return bill;
}

float toiletries::total_bill(float f)
{
	float tot = 0.0;
	tot = tot + f;
	bill += tot;
	return tot;
}
