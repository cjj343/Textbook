//This program displays formulas
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int choice;

	cout << "Which forumula would you like to see?" << endl;
	cout << "1: Circle" << endl;
	cout << "2: Cone" << endl;
	cout << "3: Rectangle" << endl;
	cout << "4: Cylinder" << endl;

	cin >> choice;

	switch(choice)
	{
		case 1: cout << "pi*r^2" << endl;
			break;
		case 2: cout << "pi*r(r+sqrt(h^2+r^2))" << endl;
			break;
		case 3: cout << "length*width" << endl;
			break;
		case 4: cout << "2*pi*r*h+2*pi*r^2" << endl;
			break;
		default: cout << "Please enter a valid choice" << endl;
	 		break;
	}		 
	return 0;
}

