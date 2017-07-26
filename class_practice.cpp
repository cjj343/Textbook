//This program is practice with classes
#include <iostream>

using namespace std;

class Circle
{
	private: double radius;

	public: void setRadius(double r)
		 { radius = r; }

		 double calcArea()
		 { return (3.14*(pow(radius, 2))); }

};

class Pizza
{
	private: double price;
		 Circle size;

	public: void setPrice(double p)
		{ price = p; }

		void setSize(double d)
		{ size.setRadius((d/2)); }

		double costPerSqIn()
		{ return price/size.calcArea(); }
};

int main()
{
	Pizza ppsq;
	double diam, pri, result;

	cout << "What is the size of the pizza?" << endl;
	cin >> diam;
	ppsq.setSize(diam);

	cout << "What is the price of the pizza?" << endl;
	cin >> pri;
	ppsq.setPrice(pri);

	cout << "The cost per sqaure inch is: " << ppsq.costPerSqIn() << endl;

	return 0;

}




