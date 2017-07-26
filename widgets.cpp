//This program calculates how many widgets are on a pallet
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const double WIDGET_WEIGHT = 12.5;
	double palletEmpty, palletFull, widgets;

	cout << "How much does the pallet weigh when it's empty?\n";
	cin >> palletEmpty;

	cout << "How much does the pallet weigh when it's full?\n";
        cin >> palletFull;

	widgets = (palletFull - palletEmpty) / WIDGET_WEIGHT;

	cout << "The number of widgets on the pallet is " << widgets << endl;

		
	return 0;
}

