//This program calculates shipping charges
#include<iostream>
using namespace std;

const double RATE_1 = 3.10,
      	     RATE_2 = 4.20,
	     RATE_3 = 5.30,
	     RATE_4 = 6.40,
	     PER500 = 500;


double calculateCharge(double, double);

int main()
{
	double weight, charge, miles;
	
	do
	{
		cout << "How much does your package weigh in Kg? (A value of zero will exit the program.)" << endl;
		cin >> weight;

		if(weight != 0)
		{
			cout << "How far are you shipping the package in miles?" << endl;
			cin >> miles;

			charge = calculateCharge(weight, miles);
			cout << "The charge for this package is $ " << charge << endl;
		}

	}while(weight != 0);

	return 0;

}

double calculateCharge(double arg1, double arg2)
{
	double charge;

	if(arg1 <= 2 && arg1 > 0)
	{
		charge = (arg2/PER500)*RATE_1;
	}

	else if(arg1 > 2 && arg1 <= 6)
	{
		charge = (arg2/PER500)*RATE_2;
	}

	else if(arg1 > 6 && arg1 <= 10)
	{
		charge = (arg2/PER500)*RATE_3;
	}

	else if(arg1 > 10)
	{
		charge = (arg2/PER500)*RATE_4;
	}
	
	return charge;
}
