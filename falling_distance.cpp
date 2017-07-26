//This program uses a function to display a falling distance table
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;

double fallingDistance(double);

const double G = 9.8;

int main()
{
	double distance, time = 1;

	cout << setw(15) << left << "Time" << setw(15) << left << "Distance" << endl;
	cout << "--------------------------------" << endl << endl;

	for(time; time <= 10; time ++)
	{
		distance = fallingDistance(time);
		cout << setw(15) << left << time << setw(15) << left << distance << endl;
	}

	return 0;
}

double fallingDistance(double arg1)
{
	return ((static_cast<double>(1)/2)*(pow(arg1, 2))*G);

}
