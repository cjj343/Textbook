//This program determines how fast sound can travel
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	const int AIR_SPEED = 1100, WATER_SPEED = 4900, STEEL_SPEED = 16400;
	int choice;
	double distance, time;


	cout << "Sound travels at different speeds in different mediums." << endl;
	cout << "Please select a medium.\n\n";
	cout << setw(20) << left << "1: Air" << "1,100 FPS" << endl;
	cout << setw(20) << left << "2: Water" << "4,900 FPS" << endl;
	cout << setw(20) << left << "3: Steel" << "16,400 FPS" << endl;
	cout << setw(20) << left << "4: Quit" << endl;

	cin >> choice;

	switch(choice)
	{
		case 1: cout << "You have selected air." << endl;
			cout << "Enter the distance traveled in feet." << endl;
			cin >> distance;
			time = distance/AIR_SPEED;
			cout << fixed << showpoint << setprecision(4) << "It will take " << time << " second(s) for sound to travel this distance in air." << endl;
			break;
		case 2: cout << "You have selected water." << endl;
			cout << "Enter the distance traveled in feet." << endl;
			cin >> distance;
			time = distance/WATER_SPEED;
			cout << fixed << showpoint << setprecision(4) << "It will take " << time << " second(s) for sound to travel this distance in water." << endl;
			break;
		case 3: cout << "You have selected steel." << endl;
			cout << "Enter the distance traveled in feet." << endl;
			cin >> distance;
			time = distance/STEEL_SPEED;
			cout << fixed << showpoint << setprecision(4) << "It will take " << time << " second(s) for sound to travel this distance in steel." << endl;
			break;
		case 4: cout << "You quit" << endl;
			break;
		default: cout << "Please enter a valid selection" << endl;
	}


			return 0;
}

