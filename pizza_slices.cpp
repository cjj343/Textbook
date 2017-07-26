//This program calculates pizza slices
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	const double PI = 3.14;
	const double SLICE_AREA = 14.125;
	double diameter, radius, area;
	int sliceNumber;

	cout << "What is the diameter of the pizza in inches?" << endl;
	cin >> diameter;

	radius = diameter/2;
	area = PI*(pow(radius, 2));
	
	sliceNumber = area/SLICE_AREA;

	cout << sliceNumber;

	return 0;
}

