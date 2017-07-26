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
	int random;
	char user, user2;
	
	seed = time(0);
	srand(seed);

	cout << "Would like to enter a range for your random number? (Y or N)\n";
	cin.get(user);

	if(user == 89)
	{

	cout << "Please enter an integer for minimum value.\n";
	cin >> MIN_VALUE;

	cout << "Please enter an integer for maximum value.\n";
	cin >> MAX_VALUE;

	random = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

	cout << "Your random number is " << random << endl;
	}

	if(user == 78)
	{
		random = rand();
		cout << "Your random number is " << random << endl;
	}

	cout << "Would you like another random number? (Y or N)\n";
	cin >> user2;

	if(user2 == 89)
	{	
	do

	{

		cout << "Would like to enter a range for your random number? (Y or N)\n";
		cin >> user;

		if(user == 89)
		{

			cout << "Please enter an integer for minimum value.\n";
			cin >> MIN_VALUE;
	
			cout << "Please enter an integer for maximum value.\n";
			cin >> MAX_VALUE;

			random = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

			cout << "Your random number is " << random << endl;
		}

		if(user == 78)
		{
			random = rand();
			cout << "Your random number is " << random << endl;
		}

		cout << "Would you like another random number? (Y or N)\n";
		cin >> user2;

	}
	
	while(user2 == 89);
	}

	return 0;
}

