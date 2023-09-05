#include "teaNcoffee.h"

teaNcoffee::teaNcoffee()
{
    quantity = 0;
    bill = 0.0;
}

teaNcoffee::teaNcoffee(int q, float f)
{
    quantity = q;
    bill = f;
}

void teaNcoffee::select()
{
	int choice = 0;
	cout << "Enter your choice:" << endl;
	cout << "1. Tea Bags - Rs. 180 " << endl;
	cout << "2. Dry tea leaves - Rs. 260 per kg" << endl;
	cout << "3. Coffee Beans - Rs. 570 " << endl;
	cout << "4. Coffee Mix Powder - Rs. 240" << endl;
	cout << "5. Green Tea - Rs. 180 " << endl;
	cout << "6. Joshanda 12-pack - Rs. 150 " << endl;
	cout << "-----Press 0 to exit---- " << endl;
	cin >> choice;
	if (choice == 1)
	{
		teaNcoffee::setprice(180);
		teaNcoffee::total_bill(180);
	}
	if (choice == 2)
	{
		teaNcoffee::setprice(260);
		teaNcoffee::total_bill(260);
	}
	if (choice == 3)
	{
		teaNcoffee::setprice(570);
		teaNcoffee::total_bill(570);
	}
	if (choice == 4)
	{
		teaNcoffee::setprice(240);
		teaNcoffee::total_bill(240);
	}
	if (choice == 5)
	{
		teaNcoffee::setprice(180);
		teaNcoffee::total_bill(180);
	}
	if (choice == 6)
	{
		teaNcoffee::setprice(150);
		teaNcoffee::total_bill(150);
	}
	if (choice == 0)
	{
		return;
	}

}

float teaNcoffee::getbill()
{
	return bill;
}

float teaNcoffee::total_bill(float f)
{
	float tot = 0.0;
	tot = tot + f;
	bill += tot;
	return tot;
}