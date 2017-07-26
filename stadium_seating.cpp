//This program calculates revenue genereated at a stadium
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const double CLASS_A = 15,
	      CLASS_B = 12,
	      CLASS_C = 9;
	
	double classA, classB, classC, totalSales;
	

	cout << "How many Class A tickets were sold?\n";
	cin >> classA;

	cout << "How many Class B tickets were sold?\n";
	cin >> classB;

	cout << "How many Class C tickets were sold?\n";
	cin >> classC;

	totalSales = (classA*CLASS_A) + (classB*CLASS_B) + (classC*CLASS_C);

	cout << fixed << setprecision(2) << "This game generated " << totalSales << " dollars in revenue.\n";

	return 0;
}

