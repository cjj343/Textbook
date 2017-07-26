//This program calculates the average of five test scores
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double test1, test2, test3, test4, test5, average;

	cout << "Please enter five test scores seperated by a space.\n";

	cin >> test1 >> test2 >> test3 >> test4 >> test5;

	average = (test1 + test2 + test3 + test4 + test5) / 5;

	cout << fixed << setprecision(1) << "The average is " << average << endl;

	return 0;
}

