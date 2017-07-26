//This program sorts students alpha from a file 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	string name1, name2, name3, value, smallest, largest;
	int numValue = 2;

	inputFile.open("c:\\users\\cameron\\desktop\\LineUp.txt");

	if(inputFile)
	{

			inputFile >> name1;
			inputFile >> name2;

			if(name1 < name2)
			{
				smallest = name1;
				largest = name2;
			}

			if(name1 > name2)
			{
				smallest = name2;
				largest = name1;
			}

			while(inputFile >> name3)
			{
				numValue++;

				if(name3 < smallest)
				{
					smallest = name3;
				}

				if(name3 > largest)
				{
					largest = name3;
				}
			}
			
			cout << "There are " << numValue << " names on the list." << endl;
			cout << "The first student is " << smallest << endl;
			cout << "The last student is " << largest << endl;
	
	}
	else
	{
		cout << "There was an error opening the file." << endl;
	}

	return 0;
}

