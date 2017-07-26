#include <iostream>
#include <string>



using namespace std;

class Population
{
	private: double population, deaths, births;

	public: Population(double p, double d, double b)
		{ population = p; deaths = d; births = b;}

		void setPop(double);
		void setDeath(double);
		void setBirth(double);
		double getDRate();
		double getBRate();


};

void Population::setPop(double p)
{
	population = p;
}

void Population::setDeath(double d)
{
	deaths = d;
}

void Population::setBirth(double b)
{
	births = b;
}

double Population::getDRate()
{
	return deaths/population;
}

double Population::getBRate()
{
	return births/population;
}

int main()
{
	double p = 2, d = 0, b = 0;
	double drate, brate;
	Population info(p, d, b);

	cout << "What is the population?" << endl;
	cin >> p;

	if(p >= 2)
		info.setPop(p);
	else
		cout << "Invalid input..using default value (2)" << endl;

	cout << "How many deaths were there?" << endl;
	cin >> d;

	if(d >= 0)
		info.setDeath(d);
	else
		cout << "Invalid input..using default value (0)" << endl;

	cout << "How many births were there?" << endl;
	cin >> b;

	if(b >= 0)
		info.setBirth(b);
	else
		cout << "Invalid input..using default value (0)" << endl;

	drate = info.getDRate();
	brate = info.getBRate();

	cout << "The death rate is: " << drate << endl;
	cout << "The birth rate is: " << brate << endl;



return 0;
}


