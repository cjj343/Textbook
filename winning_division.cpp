//This program determines which division had the greatest sales
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;

double validate(double);
void printHighest(double, double, double, double);



int main()
{
	double neSales, seSales, nwSales, swSales;

	cout << "What were the sales for the Northeast Division?" << endl;
	cin >> neSales;
	neSales = validate(neSales);

	cout << "What were the sales for the Southheast Division?" << endl;
	cin >> seSales;
	seSales = validate(seSales);

	cout << "What were the sales for the Northwest Division?" << endl;
	cin >> nwSales;
	nwSales = validate(nwSales);

	cout << "What were the sales for the Southwest Division?" << endl;
	cin >> swSales;
	swSales = validate(swSales);

	printHighest(neSales, seSales, nwSales, swSales);

	return 0;
}

double validate(double arg1)
{
	while(arg1 < 0)
	{
		cout << "Please enter a number greater than zero." << endl;
		cin >> arg1;
	}

	return arg1;
}

void printHighest(double arg1, double arg2, double arg3, double arg4)
{
	if(arg1 > arg2 && arg1 > arg3 && arg1 > arg4)
	{
		cout << "The Northeast Division had the greatest sales with $ " << arg1 << " of revenue." << endl;
	}

	if(arg2 > arg1 && arg2 > arg3 && arg2 > arg4)
	{
		cout << "The Southeast Division had the greatest sales with $ " << arg2 << " of revenue." << endl;
	}

	if(arg3 > arg1 && arg3 > arg2 && arg3 > arg4)
	{
		cout << "The Northwest Division had the greatest sales with $ " << arg3 << " of revenue." << endl;
	}

	if(arg4 > arg2 && arg4 > arg3 && arg4 > arg1)
	{
		cout << "The Southwest Division had the greatest sales with $ " << arg4 << " of revenue." << endl;
	}
}
