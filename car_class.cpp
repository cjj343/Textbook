#include <iostream>
#include <string>



using namespace std;

class Car
{
	private: int year, speed;
		 string make;

	public: Car(int y, string m, int s = 0)
		{year = y; make = m; speed = s; }

		string getMake();
		int getYear();
		int getSpeed();
		int accelerate(int);
		int decelerate(int);

};

string Car::getMake()
{
	return make;
}

int Car::getYear()
{
	return year;
}

int Car::getSpeed()
{
	return speed;
}

int Car::accelerate(int s)
{	
	speed = s + 5;
	return speed;
}

int Car::decelerate(int s)
{	
	speed = s - 5;
	return speed;
}


int main()
{
	int y, s;
	string m;

	cout << "What is the model year of the vehicle?" << endl;
	cin >> y;
	cin.ignore();

	cout << "What is the make and model of the vehicle?" << endl;
	getline(cin, m);

	Car info(y, m);

	cout << endl;

	m = info.getMake();
	cout << "Make: " << m << endl;

	y = info.getYear();
	cout << "Year: " << y << endl;

	s = info.getSpeed();
	cout << "Current Speed: " << s << endl;
	
	cout << endl;
	cout << "The car is now accelerating." << endl;
	cout << endl;

	for(int i = 1; i <= 5; i++)
	{
		s = info.accelerate(s);
		cout << "Current Speed: " << s << endl;
	}

	cout << endl;
	cout << "The car is now decelerating." << endl;
	cout << endl;

	for(int i = 1; i <= 5; i++)
	{
		s = info.decelerate(s);
		cout << "Current Speed: " << s << endl;
	}

	

return 0;
}


