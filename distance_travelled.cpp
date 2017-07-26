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
	int days, total;

	cout << "This program calculates what you would make" << endl;
	cout << " If you were paid one penny on your first day" << endl;
	cout << " But your salary doubled every day of the month." << endl;
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

	for(int count = 0; count <= days; count++)
	{
		total = count*count;
		cout << setw(7) << left << count << setw(10) << left << total << endl;
	}

	return 0;
}

