//This program returns the sin, cos and tan of an angle
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	double theta, sinRes, cosRes, tanRes;

	cout << "Enter the angle in radians." << endl;
	cin >> theta;

	sinRes = sin(theta);
	cosRes = cos(theta);
	tanRes = tan(theta);

	cout << fixed << setprecision(4) << setw(10) << left << "Sin:" << sinRes << " radians" << endl;
	cout << fixed << setprecision(4) << setw(10) << left << "Cos:" << cosRes << " radians" << endl;
	cout << fixed << setprecision(4) << setw(10) << left << "Tan:" << tanRes << " radians" << endl;

	return 0;
}

