//This program calculates sales tx
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const double COUNTY_TAX = .02,
	      	STATE_TAX = .04;
	double total, countyTax, stateTax, revenue, totalTax;
	string month;
	int year;

	cout << "Enter the month and year seperated by a space." << endl;
	cin >> month >> year;

	cout << "Enter the total sales, including tax, for the month." << endl;
	cin >> total;
	
	revenue = total / 1.06;
	countyTax = revenue * COUNTY_TAX;
	stateTax = revenue * STATE_TAX;
	totalTax = countyTax + stateTax;

	cout << left << setw(30) << "\nMonth: " << " " <<  month << " " << year << endl;
	cout << "------------------------------------------------------" << endl;
	cout << fixed << setprecision(2) << endl;
	cout << left << setw(30) << "Total Collected: " << "$ " << total << endl;
	cout << left << setw(30) << "Sales: " << "$ " << revenue << endl;
	cout << left << setw(30) << "County Sales Tax: " << "$ " << countyTax << endl;
	cout << left << setw(30) << "State Sales Tax: " << "$ " << stateTax << endl;
	cout << left << setw(30) << "Total Sales Tax: " << "$ " << totalTax << endl;



		
	return 0;
}

