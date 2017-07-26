//This program mixes colors
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	string color1, color2, color3;

	cout << "Please enter two primary colors (Red, Blue or Yellow)" << endl;
	cout << "Enter the first color" << endl;
	getline(cin, color1);
	cout << "Enter the second color" << endl;
	getline(cin, color2);

	if((color1 == "red") || (color1 == "Red") || (color1 == "RED"))
	{
		if((color2 == "blue") || (color2 == "Blue") || (color2 == "BLUE"))
			cout << "This makes purple" << endl;
		else if((color2 == "yellow") || (color2 == "Yellow") || (color2 == "YELLOW"))
			cout << "This makes orange" << endl;
	}

	else if((color1 == "blue") || (color1 == "Blue") || (color1 == "BLUE"))
	{
		if((color2 == "yellow") || (color2 == "Yellow") || (color2 == "YELLOW"))
			cout << "This makes green" << endl;
		else if((color2 == "red") || (color2 == "Red") || (color2 == "RED"))
			cout << "This makes purple" << endl;
	}

	else if((color1 == "yellow") || (color1 == "Yellow") || (color1 == "YELLOW"))
	{
		if((color2 == "red") || (color2 == "Red") || (color2 == "RED"))
			cout << "This makes orange" << endl;
		else if((color2 == "blue") || (color2 == "BLUE") || (color2 == "Blue"))
			cout << "This makes green" << endl;
	}

	else
		cout << "You have not entered a valid color" << endl;

	return 0;
}

