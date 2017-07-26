//This program calculates sales tax
#include <iostream>
using namespace std;

int main ()
{
	float totalTax, stateTax, countyTax, stateRate, countyRate, purchase;
	
	cout << "Enter total purchase.\n";
	cin >> purchase;

	cout << "Enter the county tax rate as a percentage. \n";
	cin >> countyRate;
	countyRate = countyRate*.01;

	cout << "Enter the state tax rate as a percentage. \n";
	cin >> stateRate;
	stateRate = stateRate*.01;

	totalTax = (purchase*countyRate)+(purchase*stateRate);
	stateTax = purchase*stateRate;
	countyTax = purchase*countyRate;

	cout << "Total tax is " << totalTax << endl;
	cout << "State tax is " << stateTax << endl;
	cout << "County tax is " << countyTax << endl;

	return 0;
}

