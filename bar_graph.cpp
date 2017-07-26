//This program generates a bar graph
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	long sales1, sales2, sales3, stars1, stars2, stars3;

	cout << "Please enter sales rounded to the nearest $100 for store 1." << endl;
	cin >> sales1;

	while(sales1%100 != 0)
	{
		cout << "Please enter sales rounded to the nearest hundred." << endl;
		cin >> sales1;
	}
	
	while(sales1 < 0)
	{
		cout << "Sales cannot be negative" << endl;
		cin >> sales1;
	}

	cout << "Please enter sales rounded to the nearest $100 for store 2." << endl;
	cin >> sales2;

	while(sales2%100 != 0)
	{
		cout << "Please enter sales rounded to the nearest hundred." << endl;
		cin >> sales2;
	}

	while(sales2 < 0)
	{
		cout << "Sales cannot be negative" << endl;
		cin >> sales2;
	}

	cout << "Please enter sales rounded to the nearest $100 for store 3." << endl;
	cin >> sales3;

	while(sales3%100 != 0)
	{
		cout << "Please enter sales rounded to the nearest hundred." << endl;
		cin >> sales3;
	}

	while(sales3 < 0)
	{
		cout << "Sales cannot be negative" << endl;
		cin >> sales3;
	}

	stars1 = sales1/100;
	stars2 = sales2/100;
	stars3 = sales3/100;

	cout << "Store 1:";

	for(int count = 1; count <= stars1; count++)
	{
		cout << "*";
	}

	cout << endl;
	cout << "Store 2:";

	for(int count = 1; count <= stars2; count++)
	{
		cout << "*";
	}

	cout << endl;
	cout << "Store 3:";

	for(int count = 1; count <= stars3; count++)
	{
		cout << "*";
	}

	return 0;
}

