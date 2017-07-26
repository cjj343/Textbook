#include <iostream>
#include <string>
#include <iomanip>



using namespace std;

class Tip
{
	private: double taxRate;

	public: Tip()
		{ taxRate = .065; }

		Tip(double t)
		{ taxRate = t; }

		void calcTip(double, double);

};

void Tip::calcTip(double total, double tipRate)
{
	double convertTip, totalMeal, tipAmount, totalBill;

	convertTip = tipRate/100;

	totalMeal = total-(1-taxRate);

	tipAmount = totalMeal*convertTip;

	totalBill = total+tipAmount;
	
	cout << endl;
	cout << fixed << showpoint << setprecision(2);

	cout << "Meal w/ Tax: " << total << endl;
	cout << "Meal cost: " << totalMeal << endl;
	cout << "Tip Rate: " << tipRate << " %" << endl;
	cout << "Tip Amount: " << tipAmount << endl;
	cout << "Total Bill: " << totalBill << endl;

}


	



int main()
{
	double tax, total, tipRate;
	char user;

	Tip calc;

	cout << "What is the tax rate?" << endl;
	cout << "(If unknown, enter 0 and default tax of 6.5 % will be used)" << endl;
	cin >> tax;

	if(tax != 0)
	{
		if(tax > 1)
			tax = tax/100;
			
		Tip calc(tax);
	}
	else
		Tip calc;


	cout << "What was the total amount?" << endl;
	cin >> total;

	do
	{
		cout << "What percentage tip would you like to calculate?" << endl;
		cin >> tipRate;

		calc.calcTip(total, tipRate);

		cout << "Would you like to calculate a different tip? (Y or N)" << endl;
		cin >> user;

	}while(user == 'Y' || user == 'y');



return 0;
}


