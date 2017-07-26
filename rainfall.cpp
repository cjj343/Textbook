#include <iostream>
#include <iomanip>

using namespace std;

void fillRain(double []);
double averageRain(const double []);
int findLowest(const double []);
int findHighest(const double []);
double findTotal(const double []);

int main()
{
	double rainfall[12];
	double avg, total;
	int low, high;

	fillRain(rainfall);
	avg = averageRain(rainfall);
	low = findLowest(rainfall);
	high = findHighest(rainfall);
	total = findTotal(rainfall);

	cout << setw(20) << " " << "Annual Rain Report" << endl;
	cout << "\n\n";
	cout << "Total Rain: " << total << endl;
	cout << "Lowest: ";

	switch(low)
		{
			case 0: cout << "January" << endl;
				break;
			case 1: cout << "February" << endl;
				break;
			case 2: cout << "March" << endl;
				break;
			case 3: cout << "April" << endl;
				break;
			case 4: cout << "May" << endl;
				break;
			case 5: cout << "June" << endl;
				break;
			case 6: cout << "July" << endl;
				break;
			case 7: cout << "August" << endl;
				break;
			case 8: cout << "September" << endl;
				break;
			case 9: cout << "October" << endl;
				break;
			case 10: cout << "November" << endl;
				break;
			case 11: cout << "December" << endl;
				break;
		}

	cout << "Highest: ";

		switch(high)
		{
			case 0: cout << "January" << endl;
				break;
			case 1: cout << "February" << endl;
				break;
			case 2: cout << "March" << endl;
				break;
			case 3: cout << "April" << endl;
				break;
			case 4: cout << "May" << endl;
				break;
			case 5: cout << "June" << endl;
				break;
			case 6: cout << "July" << endl;
				break;
			case 7: cout << "August" << endl;
				break;
			case 8: cout << "September" << endl;
				break;
			case 9: cout << "October" << endl;
				break;
			case 10: cout << "November" << endl;
				break;
			case 11: cout << "December" << endl;
				break;
		}
	
	cout << "Average: " << avg << endl;



return 0;
}

void fillRain(double array1[12])
{
	for(int i = 0; i < 12; i++)
	{
		switch(i)
		{
			case 0: cout << "Enter the rainfall for January: ";
				cin >> array1[i];
				break;
			case 1: cout << "Enter the rainfall for February: ";
				cin >> array1[i];
				break;
			case 2: cout << "Enter the rainfall for March: ";
				cin >> array1[i];
				break;
			case 3: cout << "Enter the rainfall for April: ";
				cin >> array1[i];
				break;
			case 4: cout << "Enter the rainfall for May: ";
				cin >> array1[i];
				break;
			case 5: cout << "Enter the rainfall for June: ";
				cin >> array1[i];
				break;
			case 6: cout << "Enter the rainfall for July: ";
				cin >> array1[i];
				break;
			case 7: cout << "Enter the rainfall for August: ";
				cin >> array1[i];
				break;
			case 8: cout << "Enter the rainfall for September: ";
				cin >> array1[i];
				break;
			case 9: cout << "Enter the rainfall for October: ";
				cin >> array1[i];
				break;
			case 10: cout << "Enter the rainfall for November: ";
				cin >> array1[i];
				break;
			case 11: cout << "Enter the rainfall for December: ";
				cin >> array1[i];
				break;
		}
	}
}

double averageRain(const double array1[12])
{
	double total = 0;

	for(int i = 0; i < 12; i++)
	{
		total += array1[i];
	}

	return total/12;
}

int findLowest(const double array1[12])
{
	int lowest = array1[0];
	int result = 0;

	for(int i = 1; i < 12; i++)
	{
		if(array1[i] < lowest)
		{
			lowest = array1[i];
			result = i;
		}
	}

	return result;
}

int findHighest(const double array1[12])
{
	int highest = array1[0];
	int result = 0;

	for(int i = 1; i < 12; i++)
	{
		if(array1[i] > highest)
		{
			highest = array1[i];
			result = i;
		}
	}

	return result;
}

double findTotal(const double array1[12])
{
	double total = 0;

	for(int i = 0; i < 12; i++)
	{
		total += array1[i];
	}

	return total;
}
