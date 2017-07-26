//This program estimates the minimum amount a home should be insured for
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double homeWorth, minIns;
	const double MIN_INS = .80;

	cout << "How much is your home worth?(no commas)\n";
	cin >> homeWorth;

	minIns = homeWorth*MIN_INS;

	cout << fixed << setprecision(2) << "Your home should be insured for at least " << minIns << " dollars.\n";

	return 0;
}

