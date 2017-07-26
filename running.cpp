//This program determines the winner of a race
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	double racer1, racer2, racer3;

	cout << "Please enter the times of 3 racers" << endl;
	cout << "Racer1: " << endl;
	cin >> racer1;
	cout << "Racer2: " << endl;
 	cin >> racer2;
	cout << "Racer3: " << endl;
	cin >> racer3;


	if(racer1 <= 0 || racer2 <= 0 || racer3 <= 0)
	{
		cout << "Pretty sure that's impossible" << endl;
	}
	else if(racer1 < racer2 && racer1 < racer3)
	{
		if(racer2 < racer3)
		{
			cout << "Racer1 is first, Racer2 is second, Racer3 is third" << endl;
		}
		else if(racer3 < racer2)
		{
			cout << "Racer1 is first, Racer3 is second, Racer2 is third" << endl;
		}
	}
	else if(racer2 < racer1 && racer2 < racer3)
	{
		if(racer3 < racer1)
		{
			cout << "Racer2 is first, Racer3 is second, Racer1 is third" << endl;
		}
		else if(racer1 < racer3)
		{
			cout << "Racer2 is first, Racer1 is second, Racer3 is third" << endl;
		}
	}
	else if(racer3 < racer1 && racer3 < racer2)
	{
		if(racer2 < racer1)
		{
			cout << "Racer3 is first, Racer2 is second, Racer1 is third" << endl;
		}
		else if(racer1 < racer2)
		{
			cout << "Racer3 is first, Racer1 is second, Racer2 is third" << endl;
		}
	}
	else if(racer1 == racer2 && racer1 == racer3)
	{
		cout << "It's a three way tie!" << endl;
	}
	else if(racer1 == racer2)
	{
		if(racer1 < racer3)
		{
		cout << "Racer1 and Racer2 tied for first. Racer3 came in second" << endl;
		}
		else if(racer3 < racer1)
		{
			cout << "Racer3 came in first. Racer1 and Racer2 tied for second" << endl;
		}
	}
	else if(racer1 == racer3)
	{
		if(racer1 < racer2)
		{
		cout << "Racer1 and Racer3 tied for first. Racer2 came in second" << endl;
		}
		else if(racer2 < racer1)
		{
			cout << "Racer2 came in first. Racer1 and Racer3 tied for second" << endl;
		}
	}
	else if(racer2 == racer3)
	{
		if(racer2 < racer1)
		{
		cout << "Racer2 and Racer3 tied for first. Racer1 came in second" << endl;
		}
		else if(racer1 < racer2)
		{
			cout << "Racer1 came in first. Racer2 and Racer3 tied for second" << endl;
		}
	}
	else
	{
		cout << "Please enter valid times" << endl;
	}

	return 0;
}

