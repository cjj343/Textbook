#include <iostream>
#include <string>

using namespace std;

class Avg
{
	private: double avgVal;
		 double total;
		 double count;
	
	public: Avg()
		{ avgVal = 0; total = 0; count = 0; }

		void calcTotal(double);
		void calcAverage();
		double getTotal();
		double getAverage();

};

void Avg::calcTotal(double s)
{
	total += s;
	count ++;
}

void Avg::calcAverage()
{
	avgVal = total/count;
}

double Avg::getTotal()
{
	return total;
}

double Avg::getAverage()
{
	return avgVal;
}


class Product
{
	private: string salsaType;
		 double sales;

	public: Product()
		{ salsaType = "Mild"; sales = 0; }

		void setType(string);
		void setSales(double);
		string getType();
		double getSales();
};

void Product::setType(string t)
{
	salsaType = t;
}

void Product::setSales(double s)
{
	sales = s;
}

string Product::getType()
{
	return salsaType;
}

double Product::getSales()
{
	return sales;
}


int main()
{
	Product info[5];
	Avg values;
	double tot, avg, high, low;
	string highest, lowest;

	for(int i = 0; i < 5; i++)
	{
		string t;
		double s;

		cout << "Enter the salsa type." << endl;
		cin >> t;
		info[i].setType(t);
		cout << "Enter the sales for this type." << endl;
		cin >> s;
		info[i].setSales(s);
		values.calcTotal(s);
	}

	high = info[0].getSales();
	low = info[0].getSales();
	lowest = info[0].getType();
	highest = info[0].getType();

	for(int x = 1; x < 5; x++)
	{
		double test;

		test = info[x].getSales();

		if(test < low)
		{
			lowest = info[x].getType();
		}

		if(test > high)
		{
			highest = info[x].getType();
		}
	}

	values.calcAverage();
	tot = values.getTotal();
	avg = values.getAverage();

	cout << "Total: " << tot << endl;
	cout << "Average: " << avg << endl;
	cout << "Highest: " << highest << endl;
	cout << "Lowest: " << lowest << endl;

return 0;
}
