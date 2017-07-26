//This program calculates the profit or loss of a stock transaction
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double validate(double);
double profitLoss(double NSP, double PP, double PC, double NSS, double SP, double SC);


int main()
{
	double NSP, PP, PC, NSS, SP, SC, result;
	char user;
	result = 0;

	cout << "Enter the purchase commission per transaction." << endl;
	cin >> PC;
	PC = validate(PC);

	cout << "Enter the sales commission per transaction." << endl;
	cin >> SC;
	SC = validate(SC);

	do
	{
	cout << "Enter the number of shares purchased." << endl;
	cin >> NSP;
	NSP = validate(NSP);

	if(NSP > 0)
	{
		cout << "Enter the purchase price per share." << endl;
		cin >> PP;
		PP = validate(PP);
	}

	cout << "Enter the number of shares sold." << endl;
	cin >> NSS;
	NSS = validate(NSS);

	if(NSS > 0)
	{
		cout << "Enter the sale price per share." << endl;
		cin >> SP;
		SP = validate(SP);
	}

	result += profitLoss(NSP, PP, PC, NSS, SP, SC);

	cout << "Would you like to enter another transaction? (Y or N)" << endl;
	cin >> user;

	}while(user == 'y' || user == 'Y');

	cout << fixed << showpoint << setprecision(2) << "Balance: $ " << result << endl;

return 0;
}


double validate(double arg1)
{
	if(arg1 < 0)
	{
		while(arg1 < 0)
		{
			cout << "Please enter a positive number." << endl;
			cin >> arg1;
		}
		return arg1;
	}
	else
	{
		return arg1;
	}

}

double profitLoss(double NSP, double PP, double PC, double NSS, double SP, double SC)
{
	double result;

	if(NSP == 0)
	{
		PC = 0;
		result = (((NSS*SP)-SC)-((NSP*PP)+PC));
	}
	else if(NSS == 0)
	{
		SC = 0;
		result = (((NSS*SP)-SC)-((NSP*PP)+PC));
	}

	return result;
}

