//This program generates a bank statement
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	double iniBal, intRate, deposits, depBal, totBal, intBal, interest, totInt, conversion, withdraw, avgBal, totDep, totWith, finBal;

	ofstream outputFile;

	outputFile.open("c:\\users\\cameron\\desktop\\bank_statement.txt");

	totDep=0;
	totWith = 0;
	finBal = 0;
	totInt =0;

	cout << "What is the starting balance?" << endl;
	cin >> iniBal;

	while(iniBal < 0)
	{
		cout << "Please enter a positive number" << endl;
		cin >> iniBal;
	}

	depBal = iniBal;

	cout << "What is the annual interest rate? (Ex: 3, .5)" << endl;
	cin >> intRate;

	while(intRate < 0)
	{
		cout << "Please enter a positive number" << endl;
		cin >> intRate;
	}

	interest = intRate/100;
	conversion = (intRate/100)+1;

	for(int count = 1; count <= 3; count ++)
	{
		if(count == 1)
			intBal = iniBal;

		cout << "Please enter the amount deposited into the account for month " << count << endl;
		cin >> deposits;

		while(deposits < 0)
		{
			cout << "You cannot deposit a negative number." << endl;
			cin >> deposits;
		}

		totDep += deposits;

		cout << "Please enter the amount withdrawn from the account for month " << count << endl;
		cin >> withdraw;

		while(withdraw < 0 || withdraw > depBal)
		{
			cout << "Does not compute. Enter a better number." << endl;
			cin >> withdraw;
		}

		totWith += withdraw;


		depBal = intBal + deposits;
		totBal = depBal - withdraw;
		avgBal = (totBal + intBal)/2;
		totInt += avgBal*interest;
		intBal = avgBal*conversion;


	}

	outputFile << setw(19) << " " << "Quarterly Bank Statement \n \n";
	outputFile << "Initial Balance: $ " << iniBal << endl;
	outputFile << "Total Deposits: $ " << totDep << endl;
	outputFile << "Total Withdraws: $ " << totWith << endl;
	outputFile << "Total Interest: $ " << totInt << endl;
	outputFile << "Final Balance: $ " << intBal << endl;

	cout << "The statement has been written to bank_statement.txt" << endl;

	return 0;
}

