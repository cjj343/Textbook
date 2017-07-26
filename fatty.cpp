//This program determines whether a food is low fat
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	double fatGrams, totalCal, fatCal, fatPerc;
	const int FAT_CAL = 9;

	cout << "Please enter the total calories." << endl;
	cin >> totalCal;

	cout << "Please enter the grams of fat." << endl;
	cin >> fatGrams;

	fatCal = fatGrams*FAT_CAL;
	fatPerc = (fatCal/totalCal)*100;

	if(fatGrams < 0 || totalCal < 0)
		cout << "Inconcievable!" << endl;
	else if(fatPerc <= 30)
		cout << "This is a lowfat food." << endl;
	else if(fatPerc > 30 && fatPerc <= 100)
		cout << "This is food high in fat." << endl;
	else
		cout << "Something has gone teribbly wrong." << endl;

	return 0;
}

