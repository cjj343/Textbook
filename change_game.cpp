//This program is a change counting game
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int quarters, dimes, nickels, pennies, total, randnum;
	unsigned int seed;
	const int QUARTERS = 25, DIMES = 10, NICKELS = 50, PENNIES = 1, MIN_VALUE = 1, MAX_VALUE = 1000;

	seed = time(0);
	srand(seed);
	randnum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	cout << "This game generates a random number." << endl;
	cout << "Enter the amount of quarters, nickels, dimes and pennies to equal the number" << endl;

	cout << "Your number is: " << randnum << endl;
	cout << "Quarters: ";
	cin >> quarters;
	cout << "Dimes: ";
	cin >> dimes;
	cout << "Nickels: ";
	cin >> nickels;
	cout << "Pennies: ";
	cin >> pennies;

	total = ((quarters*QUARTERS) + (dimes*DIMES) + (nickels*NICKELS) + (pennies*PENNIES));

	if(total == randnum)
		cout << "You win!" << endl;
	else
		cout << "You suck" << endl;

	return 0;
}

