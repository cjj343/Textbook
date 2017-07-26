#include <iostream>
#include <string>

using namespace std;

int main()
{
	string salsa[5] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	double sales[5];

	void getSales(string [], double []);
	void printSales(string [], double []);

	getSales(salsa, sales);
	printSales(salsa, sales);

return 0;
}

void getSales(string array1[], double array2[])
{
	cout << "Please enter the sales for each salsa type." << endl;

	for(int i = 0; i < 5; i++)
	{
		cout << array1[i] << ": ";
		cin >> array2[i];
	}
}

void printSales(string array1[], double array2[])
{
	int total = 0;
	int markH, markL;
	double highest, lowest;

	markH = 0;
	markL = 0;

	highest = lowest = array2[0];

	for(int i = 1; i < 5; i++)
	{
		if(array2[i] > highest)
		{
			highest = array2[i];
			markH = i;
		}

		if(array2[i] < lowest)
		{
			lowest = array2[i];
			markL = i;
		}
	}

	cout << endl;

	for(int i = 0; i < 5; i++)
	{
		total += array2[i];
	}

	for(int i = 0; i < 5; i++)
	{
		cout << array1[i] << ": " << array2[i] << endl;
	}

	cout << endl;
	cout << array1[markH] << " had the highest sales." << endl;
	cout << array1[markL] << " had the lowest sales." << endl;

	cout << "Total: " << total << endl;
}

