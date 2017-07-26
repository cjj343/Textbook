#include <iostream>


using namespace std;

int main()
{
	double monkey[3][7];
	const int TOTAL = 21;
	double ave, low, high;

	void userData(double [3][7]);
	double average(const double [3][7], int);
	double lowest(const double [3][7]);
	double highest(const double [3][7]);

	userData(monkey);
	ave = average(monkey, TOTAL);
	low = lowest(monkey);
	high = highest(monkey);

	cout << "Average: " << ave << endl;
	cout << "Lowest: " << low << endl;
	cout << "Highest: " << high << endl;


return 0;
}

void userData(double array1[][7])
{
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 7; col ++)
		{
			cout << "Please enter how much food monkey " << row + 1 << " ate on day " << col + 1 << ": ";
			cin >> array1[row][col];
			cout << endl;
		}
	}
}

double average(const double array1[][7], int m)
{
	double total = 0;

	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 7; col ++)
		{
			total += array1[row][col];
		}
	}

	return total/m;
}

double lowest(const double array1[][7])
{
	double lowest;

	lowest = array1[0][0];

	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 7; col ++)
		{
			if(array1[row][col] < lowest)
			{
				lowest = array1[row][col];
			}
		}
	}

	return lowest;
}

double highest(const double array1[][7])
{
	double highest;

	highest = array1[0][0];

	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 7; col ++)
		{
			if(array1[row][col] > highest)
			{
				highest = array1[row][col];
			}
		}
	}

	return highest;
}
