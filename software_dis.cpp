//This program calculates a discount
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int units;
	double total;
	const double DIS1 = .8, DIS2 = .7, DIS3 = .6, DIS4 = .5, PRICE = 199;

	cout << "How many units did you purchase?" << endl;
	cin >> units;

	if(units < 0)
	{
		cout << "Please enter a valid number" << endl;
	}
	else if(units > 0 && units < 10)
	{	
		cout << "No discount" << endl;
		total = units*PRICE;
		cout << "Your total purchase is " << total << endl;
	}
	else if(units >= 10 && units <=19)
	{
		cout << "Your discount is 20%" << endl;
		total = units*PRICE*DIS1;
		cout << "Your total purchase is " << total << endl;
	}
	else if(units >= 20 && units <=49)
	{
		cout << "Your discount is 30%" << endl;
		total = (units*PRICE)*DIS2;
		cout << "Your total purchase is " << total << endl;
	}
	else if(units >= 50 && units <=99)
	{
		cout << "Your discount is 40%" << endl;
		total = (units*PRICE)*DIS3;
		cout << "Your total purchase is " << total << endl;
	}
	else if(units >= 100)
	{
		cout << "Your discount is 50%" << endl;
		total = (units*PRICE)*DIS4;
		cout << "Your total purchase is " << total << endl;
	}
	
	return 0;
}

