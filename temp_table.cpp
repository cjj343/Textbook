//This program uses a function to display and temp conversion table
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;

double celsius(double);

int main()
{
	double celsiusResult, fahrenheit =0;

	cout << setw(15) << left << "Fahrenheit" << setw(15) << left << "Celsius" << endl;
	cout << "--------------------------------" << endl << endl;

	for(fahrenheit; fahrenheit <= 20; fahrenheit ++)
	{
		celsiusResult = celsius(fahrenheit);
		cout << setw(15) << left << fahrenheit << setw(15) << left << celsiusResult << endl;
	}

	return 0;
}

double celsius(double arg1)
{
	return (static_cast<double>(5)/9)*(arg1-32);

}
