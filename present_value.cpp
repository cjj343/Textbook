//This program calculates the amount of money you would have to deposit today to equal x value
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double validate(double);
double presentValue(double, double, double);


int main()
{
	double presentVal, futureValue, interestRate, years;

	cout << "Enter the expected return." << endl;
	cin >> futureValue;
	futureValue = validate(futureValue);

	cout << "Enter the interest rate." << endl;
	cin >> interestRate;
	interestRate = validate(interestRate);
	interestRate = interestRate/100;

	cout << "Enter the investment period in years." << endl;
	cin >> years;
	years = validate(years);

	presentVal = presentValue(futureValue, interestRate, years);

	cout << fixed << showpoint << setprecision(2) << "You would have to invest $ " << presentVal << " today to equal $ " << futureValue << " in " << years << " years." << endl;



return 0;
}


double validate(double arg1)
{
	if(arg1 < 0)
	{
		while(arg1 < 0)
		{
			cout << "Please enter a positive number." << endl;
			cin >> arg1;
		}
		return arg1;
	}
	else
	{
		return arg1;
	}

}

double presentValue(double futureValue, double interestRate, double years)
{
	double presentVal;

	presentVal = futureValue/(pow((1+interestRate), years));

	return presentVal;
}

