/**************************************
**Author: Cameron Jackson
**Date: 4/14/2017 16:43
**Description: This program returns the largest and smallest of user provided numbers
***************************************/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, largest, smallest, totalNum;

	smallest = 0; //Initialize smallest and largest values
	largest = 0;

	cout << "How many numbers would you like to enter?" << endl; //Find out how many numbers the user wants to enter
	cin >> totalNum;

	while(totalNum < 1) //Handles users input less than 1
	{
		cout << "Please enter a number greater than 0." << endl;
		cin >> totalNum;
	}

	if(totalNum == 1) //Handles scenario where user only wants to enter one number
	{
		cout << "Please enter " << totalNum << " integer." << endl;
		cin >> num1;
		smallest = num1;
		largest = num1;
	}

	else if(totalNum > 1) //Handles all other user inputs for totalNum
	{

	cout << "Please enter " << totalNum << " integers." << endl; //First user number
	cin >> num1;
	cin >> num2;

		if(num1 < num2) //statements that prime the comparison values smallest and largest
		{
			smallest = num1;
			largest = num2;
		}
		else if(num1 > num2)
		{
			smallest = num2;
			largest = num1;
		}
		else
		{
			smallest = num1;
			largest = num2;
		}

		for(int count = 2; count < totalNum; count++) //Loops until the total number of user inputs is reached. Count starts at two since two user numbers have already been entered
		{
			int num3; //local variable

			cin >> num3;

			if(num3 < smallest) //test each iteration if num3 is the smallest or largest
			{
			smallest = num3;
			}
			else if(num3 > largest)
			{
			largest = num3;
			}
		}
	}

	cout << "Min: " << smallest << endl; //Prints the results
	cout << "Max: " << largest << endl;

	return 0;
}

