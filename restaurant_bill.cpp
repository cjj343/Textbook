//This program is for dining out
#include <iostream>
using namespace std;

int main ()
{
	float charge, tax, tip, taxAmount, tipAmount, total;
	tip = .15;
	tax = .0675;
	charge = 44.50;
	taxAmount = charge*tax;
	tipAmount = charge*tip;
	total = charge+taxAmount+tipAmount;

	cout << "The cost of the meal was " << charge << " dollars.\n";
	cout << "The tax amount was " << taxAmount << " dollars.\n";
	cout << "The tip amount was " << tipAmount << " dollars.\n";
	cout << "The total amount of the meal was " << total << "dollars.\n";

	return 0;
}


	
