//This program calculates intrest 
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	double principle, interestRate, interestEarn, totalBal;
	int compound;

	cout << "What is the principle?" << endl;
	cin >> principle;

	cout << "What is the interest rate?" << endl;
	cin >> interestRate;
	
	cout << "How many times is the account compounded per year?" << endl;
	cin >> compound;

	totalBal = principle * pow((1+((interestRate*.01)/compound)), compound);
	interestEarn = totalBal - principle;

	cout << endl;
	cout << fixed << setprecision(2) << setw(30) << left << "Interest Rate:" << interestRate << "%" << endl;
	cout << fixed << setprecision(2) << setw(30) << left << "Times Compounded:" << compound << endl;
	cout << fixed << setprecision(2) << setw(30) << left << "Principle:" << "$ " << principle << endl;
	cout << fixed << setprecision(2) << setw(30) << left << "Interest:" << "$ " <<  interestEarn << endl;
	cout << fixed << setprecision(2) << setw(30) << left << "Final Balance:" << "$ " << totalBal << endl;

	return 0;
}

