//This program calculates the monthly payment on a loan
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	double interestPaid, totalPay, monthlyPay, intRate, loanAmount, intAdj, denominator, numerator;
	int payments;

	cout << "What is the total amount of the loan?" << endl;
	cin >> loanAmount;

	cout << "What is the interest rate?" << endl;
	cin >> intRate;

	cout << "How many total payments?" << endl;
	cin >> payments;

	intAdj = intRate*.01;

	numerator = intAdj * pow((1+intAdj), payments);
	denominator = (pow((1+intAdj), payments)) - 1;

	monthlyPay = loanAmount * numerator/denominator;
	totalPay = monthlyPay * payments;
	interestPaid = totalPay - loanAmount;

	cout << endl;
	cout << "-------------------------------------" << endl;

	cout << fixed << setprecision(2) << setw(30) << left << "Loan Amount:" << "$ " << loanAmount << endl;
	cout << fixed << setprecision(2) << setw(30) << left << "Monthly Int Rate:" << intRate << "%" << endl;
	cout << fixed << setprecision(2) << setw(30) << left << "Payments:" << payments << endl;
	cout << fixed << setprecision(2) << setw(30) << left << "Monthly Payments" << "$ " << monthlyPay << endl;
	cout << fixed << setprecision(2) << setw(30) << left << "Amount Paid:" << "$ " << totalPay << endl;
	cout << fixed << setprecision(2) << setw(30) << left << "Interest Paid:" << "$ " << interestPaid << endl;

	return 0;
}

