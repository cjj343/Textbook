//This program is a geometry calculator
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	double radius, areaCircle, areaRec, areaTri, lengthRec, widthRec, lengthTri, heighthTri;
	const double PI = 3.14159;
	int choice1;

	cout << "Geometry Calculator\n\n";
	cout << "1: Area of a circle" << endl;
	cout << "2: Area of a rectangle" << endl;
	cout << "3: Area of a triangle" << endl;
	cout << "4: Quit" << endl;

	cin >> choice1;

	switch(choice1)
	{
		case 1: cout << "Please enter the radius of the circle" << endl;
			cin >> radius;
			areaCircle = PI*(pow(radius, 2));
			cout << "The area of the circle is " << areaCircle << endl;
			break;
		case 2: cout << "Please enter the length and width of the rectangle" << endl;
			cin >> lengthRec >> widthRec;
			areaRec = lengthRec*widthRec;
			cout << "The area of the rectangle is " << areaRec << endl;
			break;
		case 3: cout << "Please enter the length of the base and the heighth of the triangle" << endl;
			cin >> lengthTri >> heighthTri;
			areaTri = (lengthTri*heighthTri)/2;
			cout << "The area of the triangle is " << areaTri << endl;
			break;
		case 4: cout << "You quit!" << endl;
			break;
		default: cout << "Please enter a valid selection" << endl;
			 break;
	}

	return 0;
}

