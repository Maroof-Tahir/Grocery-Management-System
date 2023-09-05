#include "delivery.h"

delivery::delivery()
{
	name = nullptr;
	address = nullptr;
	ph = 0;
}

delivery::delivery(char* n, char* add, int p)
{
	int size = strlen(n);
	name = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		name[i] = n[i];
	}
	name[size] = '\0';

	int size1 = strlen(add);
	address = new char[size1 + 1];
	for (int i = 0; i < size1; i++)
	{
		address[i] = add[i];
	}
	address[size1] = '\0';

	ph = p;

}

void delivery::setname(char* n)
{
	int size = strlen(n);
	name = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		name[i] = n[i];
	}
	name[size] = '\0';
}

void delivery::setaddress(char* add)
{
	int size = strlen(add);
	address = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		address[i] = add[i];
	}
	address[size] = '\0';
}

void delivery::setphone(int p)
{
	ph = p;
}

char* delivery::getname()
{
	char* temp = nullptr;
	int size = strlen(name);
	temp = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = name[i];
	}
	temp[size] = '\0';
	return temp;
}

char* delivery::getaddress()
{
	char* temp = nullptr;
	int size = strlen(address);
	temp = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = address[i];
	}
	temp[size] = '\0';
	return temp;
}

int delivery::getphone()
{
	return ph;
}

void delivery::display()
{
	cout << "Name: " << getname() << endl;
	cout << "Address: " << getaddress() << endl;
	cout << "Ph: " << getphone() << endl;

}
