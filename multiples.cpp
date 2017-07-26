//This program generates multiples of a user inputted number for a given range 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int rangeLow, rangeHigh, multiple, totalMultiples, n, multipleList;
	char user1;

	cout << "Enter multiple as an integer." << endl;
	cin >> multiple;

	cout << "Enter the lower range." << endl;
	cin >> rangeLow;

	cout << "Enter the upper range." << endl;
	cin >> rangeHigh;

	totalMultiples = (rangeHigh/multiple) - (rangeLow/multiple);

	n = 1;

	cout << "There are " << totalMultiples << " multiples of " << multiple << " in your given range." << endl;
	cout << "The multiples are:" << endl;

	do
	{
		multipleList = multiple*(n-1) + multiple;
		
		n = n + 1;

		if(multipleList >= rangeLow)
			{
				cout << multipleList << " ";
			}	

	}while(multipleList <= (rangeHigh - multiple));


	cout << endl << "Would you like to enter another multiplbe? (Y or N)" << endl;
	cin >> user1;

	if(user1 == 89)
	{
	do
	{	
	cout << "Enter multiple as an integer." << endl;
	cin >> multiple;

	cout << "Enter the lower range." << endl;
	cin >> rangeLow;

	cout << "Enter the upper range." << endl;
	cin >> rangeHigh;

	totalMultiples = (rangeHigh/multiple) - (rangeLow/multiple);

	n = 1;

	cout << "There are " << totalMultiples << " multiples of " << multiple << " in your given range." << endl;
	cout << "The multiples are:" << endl;

		do
			{
				multipleList = multiple*(n-1) + multiple;
				n = n + 1;

			if(multipleList >= rangeLow)
				{
					cout << multipleList << " ";
				}	

			}while(multipleList <= (rangeHigh - multiple));
	
	cout << endl << "Would you like to enter another multiplbe? (Y or N)" << endl;
	cin >> user1;
	}while(user1 == 89);

	}

	return 0;
}

