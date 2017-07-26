//This program generate and invoice for a wire company
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void stock(int &, int &, int &, double &);
void calculate(int, int, int, double);

double PRICE = 100, SH = 10;


int main()
{
	int inStock, ordered, backOrdered;
	double SSH;

	stock(inStock, ordered, backOrdered, SSH);
	calculate(inStock, ordered, backOrdered, SSH);

return 0;
}

void stock(int &arg1, int &arg2, int &arg3, double &arg4)
{
	char user;

	cout << "How many spools are in stock?" << endl;
	cin >> arg1;

	cout << "How many spools were ordered?" << endl;
	cin >> arg2;

	if(arg1 < arg2)
	{
		arg3 = arg2 - arg1;
		arg2 = arg1;
	}

	else
	{
		arg3 = 0;
	}

	cout << "Are there any special shipping and handling charges? (Y or N)" << endl;
	cin >> user;

	if(user == 'Y' || user == 'y')
	{
		cout << "Enter special charges" << endl;
		cin >> arg4;
	}
	else
	{
		arg4 = 0;
	}
}

void calculate(int inStock, int ordered, int backOrdered, double SSH)
{
	double result, bresult, shippingTotal, orderCost;

	if(backOrdered > 0)
	{
		bresult = (backOrdered*PRICE)+(backOrdered*SH)+SSH;
		cout << endl;
		cout << "The following was placed on back order: " << backOrdered << " spool(s)" << endl;
		cout << "Customer account will be charged $ " << bresult << " when the items ship." << endl;
	}

	shippingTotal=(ordered*SH)+SSH;
	orderCost = ordered*PRICE;
	result = (ordered*PRICE)+(ordered*SH)+SSH;

	cout << endl;
	cout << "Ordered (Ready to ship): " << ordered << endl;
	if(backOrdered > 0)
		cout << "Ordered (Backorder): " << backOrdered << endl;
	cout << "SSH: " << SSH << endl;
	cout << "S&H: " << shippingTotal << endl;
	cout << "Order cost: " << orderCost << endl;
	cout << "Total: " << result << endl;
}
