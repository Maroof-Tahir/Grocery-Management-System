#pragma once
#include<iostream>
using namespace std;

class delivery
{
private:
	char* name;
	char* address;
	int ph;

public:
	delivery();
	delivery(char* n, char* add, int p);
	void setname(char* n);
	void setaddress(char* add);
	void setphone(int p);
	char* getname();
	char* getaddress();
	int getphone();
	void display();
};

