//This program sorts numbers 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num1, num2, largest, smallest, num3;

	smallest = 0;
	largest = 0;

	cout << "Enter your first number." << endl;
	cin >> num1;
	cout << "Enter your second number." << endl;
	cin >> num2;

	if(num1 < num2)
	{
		smallest = num1;
		largest = num2;
	}
	if(num1 > num2)
	{
		smallest = num2;
		largest = num1;
	}

	cout << "Enter more numbers and I will give you the smallest and largest number." << endl;
	cout << "A value of zero will exit." << endl;

	do
	{

		cin >> num3;

		if(num3 < smallest && num3 != 0)
		{
			smallest = num3;
		}
		else if(num3 > largest && num3 !=0)
		{
			largest = num3;
		}

	}while(num3);

	cout << "The smallest number is " << smallest << endl;
	cout << "The largest number is " << largest << endl;

	return 0;
}

