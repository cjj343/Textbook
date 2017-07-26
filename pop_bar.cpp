//This program displays a bar graph from an external file
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;



int main()
{
	int numValues = 0,
	    year = 1910;
	double population, value, stars;

	ifstream inputFile;

	inputFile.open("c:\\users\\cameron\\desktop\\people.txt");

	if(inputFile)
	{
		while(inputFile >> population)
		{
			stars = population/1000;
			cout << year << ": ";
			year += 20;
		
			for(int count = 1; count <= stars; count++)
			{
				cout << "*";
			}

			cout << endl;
			
		}

	}
	else
	{
		cout << "There was a file open error" << endl;
	}

	return 0;
}

