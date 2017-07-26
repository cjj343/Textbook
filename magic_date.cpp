//This program determines if a date is magic
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int month, day, year;

	cout << "Please enter a date in the following format: MM/DD/YY" << endl;
	cin >> month;
	cin.ignore();
	cin >> day;
	cin.ignore();
	cin >> year;

	if(year > 99 || year < 0)
	{
		cout << "Invalid input" << endl;
	}
	else if(month > 12 || month < 1)
	{
		cout << "Invalid input" << endl;
	}
	else if(day > 31 || day < 1)
	{
		cout << "Invalid input" << endl;
	}
	else if((month*day)==year)
	{
		cout << "This date is magic!" << endl;
	}
	else
	{
		cout << "This date sucks" << endl;
	}


	return 0;
}

