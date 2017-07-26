//This program determines whether a given year is a leap yer
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int year, testVal1, testVal2, testVal3;

	cout << "Enter a year" << endl;
	cin >> year;

	testVal1 = year%100;
	testVal2 = year%400;
	testVal3 = year%4;

	if(testVal1 == 0 && testVal2 == 0)
		cout << "This year is a leap year" << endl;
	else if(testVal1 != 0 && testVal3 == 0)
		cout << "This year is a leap year" << endl;
	else
		cout << "This year is not a leap year" << endl;


		
	return 0;
}

