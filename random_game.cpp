//This program generates a random number 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

	unsigned seed;
	int MIN_VALUE, MAX_VALUE;
	int random, num, guess;
	char user;

	guess =1;
		
	seed = time(0);
	srand(seed);

	cout << "This game generates a random number and you have to try and guess it." << endl;

	cout << "Would you like to enter a range for your random number? (Y or N)\n";
	cout << "The default range is 1 through 100" << endl;
	cin >> user;

	if(user == 'Y' || user == 'y')
	{

	cout << "Please enter an integer for minimum value.\n";
	cin >> MIN_VALUE;

	cout << "Please enter an integer for maximum value.\n";
	cin >> MAX_VALUE;

	while(MIN_VALUE >= MAX_VALUE)
	{
		cout << "Please enter valid values." << endl;
		cout << "Please enter an integer for minimum value.\n";
		cin >> MIN_VALUE;
		cout << "Please enter an integer for maximum value.\n";
		cin >> MAX_VALUE;
	}

	}

	else
	{
		MIN_VALUE = 1;
		MAX_VALUE = 100;
	}

	random = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

	cout << "Okay, now guess." << endl;
	cin >> num;


	do
	{
		
	if(num != random)
	{
		guess++;
	}
	if(num < random)
	{
		cout << "Too low, try again." << endl;
		cin >> num;
	}
	if(num > random)
	{
		cout << "Too high, try again." << endl;
		cin >> num;
	}
	}while(num != random);

	if(num == random)
	{
		cout << "Congratulations! You guessed it!" << endl;
		cout << "It took you " << guess << " guesses!" << endl;
		cout << "Press enter to exit" << endl;
		cin >> user;
	}

	return 0;
}

