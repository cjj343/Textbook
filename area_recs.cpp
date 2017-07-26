//This program determines which rectangle has the greater area
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double length1, width1, length2, width2, area1, area2;
	bool test;
	
	cout << "Enter the length and width of a rectabgle" << endl;
	cin >> length1 >> width1;

	cout << "Enter the length and width of another rectangle" << endl;
	cin >> length2 >> width2;

	area1 = length1*width1;
	area2 = length2*width2;

	(area1 > area2) ? (test = true) : (test = false);

	if(test)
		cout << "The area of rectangle one is greater than rectangle two" << endl;
	else

		cout << "The area of rectangle two is greater than rectangle one" << endl;

	return 0;
}

