//This program calculates a pay scenario
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
	int days;
	double conversion, total = 1;

	cout << "This program calculates what you would make" << endl;
	cout << "If you were paid one penny on your first day" << endl;
	cout << "But your salary doubled every day of the month." << endl;
	cout << endl;
	cout << "How many days of the month did you work?" << endl;
	cin >> days;

	while(days < 0 || days > 31)
	{
		cout << "Please enter a valid number." << endl;
		cin >> days;
	}

	cout << setw(7) << left << "Days" << setw(10) << left << "Total" << endl;
	cout << "--------------------" << endl;

	if(days == 0)
	{
	cout << fixed << showpoint << setprecision(2) << setw(7) << left << "0" << setw(10) << left << "0" << endl;
	}

	else
	{
	cout << fixed << showpoint << setprecision(2) << setw(7) << left << "0" << setw(10) << left << "0" << endl;
	cout << fixed << showpoint << setprecision(2) << setw(7) << left << "1" << setw(10) << left << "0.01" << endl;
	

	for(int count = 2; count <= days; count++)
	{
		total = total*2;
		conversion = total/100;
		cout << fixed << showpoint << setprecision(2) << setw(7) << left << count << setw(10) << left << conversion << endl;

	}
	}
	return 0;
}

