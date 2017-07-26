//This program is to fuck around with syntax shiz
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159;
	double degree, radians;
	int option;

	cout << "Type 1 for degrees or 2 for radians.\n";
	cin >> option;

	if(option == 1)
	{
		cout << "Enter degrees.\n";
		cin >> degree;
		radians = (degree*PI)/180;
		cout << "(" << left << fixed << showpoint << setw(7) << setprecision(4) << radians << " radians).\n";
	}

	if(option == 2)
	{
		cout << "Enter radians.\n";
		cin >> radians;
		degree = (180*radians)/PI;
		cout << "(" << left << fixed << showpoint << setw(7) << setprecision(4) << degree << " degrees).\n";
	}
}

