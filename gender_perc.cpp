//This program calculates the percentage of males and femals in a group
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int males, females, total;
	double percentMales, percentFemales;

	cout << "How many males are in the class?\n";
	cin >> males;

	cout << "How many females are in the class?\n";
	cin >> females;

	total = males + females;
	percentMales = static_cast<double>(males)/total*100;
	percentFemales = static_cast<double>(females)/total*100;

	cout << "The group consists of " << percentMales << " percent males and " << percentFemales << " percent females.\n";

	return 0;
}

