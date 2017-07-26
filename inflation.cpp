//This program displays inflation stats 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	double inflation, value, conversion;
	int year;
	const double INITIAL_VALUE = 1000;

	cout << "Please enter the inflation rate as percantage (Ex: 3.00, .75)" << endl;
	cin >> inflation;
	conversion = (inflation/100)+1;
	value = INITIAL_VALUE;

	cout << "Enter the year" << endl;
	cin >> year;

	cout << endl;

	cout << setw(10) << left << "Year" << setw(15) << left << "Current Value" << endl;
	cout << "-------------------------" << endl;
	cout << setw(10) << left << year << setw(15) << left << INITIAL_VALUE << endl;

	for(int count = 1; count < 10; count++)
	{
		value *= (static_cast<double>(1)/conversion);
		year ++;
		cout << setw(10) << left << year << setw(15) << left << value << endl;
	}


	return 0;
}

