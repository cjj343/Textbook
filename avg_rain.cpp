//This program calculates avg rainfall from an external file
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
	double monRain, avgRain, totRain, numVal, value;
	string month1, month2;

	totRain = 0;
	numVal = 0;

	ifstream input;

	input.open("c:\\users\\cameron\\desktop\\rainfall1.txt");

	if(input)
	{
		cout << endl;
		cout << "The first month stored in the file is ";
		input >> month1;
		cout << month1 << endl;
		cout << "The last month stored in the file is ";
		input >> month2;
		cout << month2 << endl;


		while(input >> monRain)
		{
			numVal += 1;
			cout << monRain << endl;
			totRain += monRain;
		}

		avgRain = totRain/numVal;

		cout << "The average rain was " << avgRain << endl;
	}
	else
	{
		cout << "There was a file open error" << endl;
	}

	return 0;
}

