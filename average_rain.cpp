//This program calculates average rainfall
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string month1, month2, month3;
	double rain1, rain2, rain3, average;

	cout << "Enter the name of the first month and the rainfall for that month with a space in-between.\n";
	cin >> month1 >> rain1;
	cout << "Enter the name of the second month and the rainfall for that month with a space in-between.\n";
	cin >> month2 >> rain2;
	cout << "Enter the name of the third month and the rainfall for that month with a space in-between.\n";
	cin >> month3 >> rain3;

	average = (rain1 + rain2 + rain3) / 3;

	cout << "The average rainfall for the months of " << month1 << " " << month2 << " and " << month3 << " is " << average << " inches.\n";
	return 0;
}

