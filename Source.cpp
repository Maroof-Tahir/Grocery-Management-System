#include<iostream>
#include"lentils.h"
#include"toiletries.h"
#include"snacks.h"
#include"cleaning.h"
#include"teaNcoffee.h"
#include"delivery.h"
using namespace std;

int cont();

int main()

{
	lentils l;
	toiletries t;
	snacks s;
	teaNcoffee tc;
	cleaning c;
	delivery d;

	int input = 0;
	cout << "----------Welcome to Grocery Management System--------" << endl;
	cout << endl;
	cout << endl;
	cout << "Enter what do you want to buy: " << endl;
	cout << "1. Lentils \n2. Toiletries \n3. Snacks\n4. Tea and Coffee\n5. Cleaning Supplies\n Press 6 to get final bill \n Press 0 to exit" << endl;
	cin >> input;
	if (input == 1)
	{
		cout << "How many lentils do you want?" << endl;
		int no = 0;
		cin >> no;
		
		for (int i = 0; i < no; i++)
		{
			cout << endl;
			l.select();
			cout << "ok, Done " << endl;
		}
		cout << "Do you want to see your current bill? (0 for no/1 for yes)" << endl;
		int b = 0;
		cin >> b;
		if (b==1)
		{
			cout << "Your currrent bill for lentils is: ";
			float t = l.total_bill(0.0);
			cout << t << endl;
			input = cont();

		}
		else if(b==0)
		{
			cout << "Continue" << endl;
			input = cont();
		}
	}

	if (input == 2)
	{
		cout << "How many toiletries do you want?" << endl;
		int no = 0;
		cin >> no;
		for (int i = 0; i < no; i++)
		{
			cout << endl;
			t.select();
			cout << "ok, Done " << endl;
		}
		cout << "Do you want to see your current bill? (0 for no/1 for yes)" << endl;
		bool b = 0;
		cin >> b;
		if (b==1)
		{
			cout << "Your currrent bill for toiletries is: ";
			float tot = t.total_bill(0);
			cout << tot << endl;
			input = cont();

		}
		else if(b==0)
		{
			cout << "Continue" << endl;
			input = cont();
		}
	}
	

	if (input == 3)
	{
		cout << "How many snacks do you want?" << endl;
		int no = 0;
		cin >> no;
		for (int i = 0; i < no; i++)
		{
			cout << endl;
			s.select();
			cout << "ok, Done " << endl;
		}
		cout << "Do you want to see your current bill? (0 for no/1 for yes)" << endl;
		bool b = 0;
		cin >> b;
		if (b==1)
		{
			cout << "Your currrent bill for snacks is: ";
			float tot = s.total_bill(0.0);
			cout << tot << endl;
			input = cont();

		}
		else if (b==0)
		{
			cout << "Continue" << endl;
			input = cont();
		}
	}

	

	if (input == 4)
	{
		cout << "How many tea and coffee supplies do you want?" << endl;
		int no = 0;
		cin >> no;
		for (int i = 0; i < no; i++)
		{
			cout << endl;
			tc.select();
			cout << "ok, Done " << endl;
		}
		cout << "Do you want to see your current bill? (0 for no/1 for yes)" << endl;
		bool b = 0;
		cin >> b;
		if (b == 1)
		{
			cout << "Your currrent bill for snacks is: ";
			float tot = tc.total_bill(0.0);
			cout << tot << endl;
			input = cont();

		}
		else if (b == 0)
		{
			cout << "Continue" << endl;
			input = cont();
		}
	}  
	if (input == 5)
	{
		cout << "How many Cleaning Utilities do you want?" << endl;
		int no = 0;
		cin >> no;
		for (int i = 0; i < no; i++)
		{
			cout << endl;
			c.select();
			cout << "ok, Done " << endl;
		}
		cout << "Do you want to see your current bill? (0 for no/1 for yes)" << endl;
		bool b = 0;
		cin >> b;
		if (b == 1)
		{
			cout << "Your currrent bill for snacks is: ";
			float tot = c.total_bill(0.0);
			cout << tot << endl;
			input = cont();
		}
		else if (b == 0)
		{
			cout << "Continue" << endl;
			input = cont();
		}
	}
	if (input == 6)
	{
		float fbill = 0.0;
		fbill = l.getbill();
		fbill = fbill + c.getbill();
		fbill = fbill + s.getbill();
		fbill = fbill + t.getbill();
		fbill = fbill + tc.getbill();
		cout << "Your final bill for all the items is: " << fbill << endl;
	}

	cout << "Do you want to deliver the items?(Y for yes and N for no)" << endl;
	char deli = '\0';
	cin >> deli;
	char* n = new char[15];
	char* add = new char[35];
	int p = 0;

	if (deli == 'Y' || deli == 'y')
	{
		cout << "Enter your name: " << endl;
		cin.ignore();
		cin.getline(n, 15);
		
		d.setname(n);
		cout << "Enter your address: " << endl;
		cin.getline(add, 35);

		d.setaddress(add);
		cout << "Enter your phone number: " << endl;
		cin >> p;
		d.setphone(p);

	}
	else
	{
		return 0;
	}
	cout << "Check your info and confirm your order" << endl;
	d.display();
	cout << "confirm order(1 for yes and 0 for no)" << endl;
	bool bb = 0;
	cin >> bb;
	if (bb == 1) 
	{
		return 0;
	}
	else if (bb == 0)
	{
		cout << "Re-enter your correct data: " << endl;

		cout << "Enter your name: " << endl;
		cin.getline(n, 15);
		d.setname(n);
		cout << "Enter your address: " << endl;
		cin.getline(add, 35);
		d.setaddress(add);
		cout << "Enter your phone number: " << endl;
		cin >> p;
		d.setphone(p);

	}


	return  0;
}

int cont()
{
	int input = 0;
	cout << endl;
	cout << "Enter what do you want to buy: " << endl;
	cout << "1. Lentils \n2. Toiletries \n3. Snacks\n4. Tea and Coffee\n5. Cleaning Supplies \nPress 6 to get final bill \n \n Press 0 to exit" << endl;
	cin >> input;
	return input;
}

