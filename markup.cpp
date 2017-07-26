//This program calculates retail price
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;

double calculateRetail(double, double);

int main()
{
	double cost, markup, retail;

	cout << "What is the wholesale cost of the product?" << endl;
	cin >> cost;

	cout << "What is the markup percentage?" << endl;
	cin >> markup;

	retail = calculateRetail(cost, markup);

	cout << retail;
	return 0;
}

double calculateRetail(double arg1, double arg2)
{
	return ((arg1*(arg2/100))+arg1);

}
