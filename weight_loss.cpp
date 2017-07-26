//This program calculates weight loss
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
	double startWeight, newWeight, monthLoss;
	int months;
	const int WEIGHT_LOSS = 4;

	cout << "If you reduce your daily caloric consumption by 500 calories" << endl;
	cout << "You could expect to lose 4 pounds a month." << endl;
	cout << "Please enter your starting weight" << endl;
	cin >> startWeight;
	while(startWeight <= 0)
	{
		cout << "You would be dead." << endl;
		cin >> startWeight;
	}
	cout << "How many months would you like to diet?" << endl;
	cin >> months;
	while(months <= 0)
	{
		cout << "Why are you even doing this?" << endl;
		cin >> months;
	}

	if(startWeight-(months*WEIGHT_LOSS) <= 0)
	{
		cout << "Uh, I dont think thats a good idea..." << endl;
		cin >> months;
	}

	cout << endl;
	cout << setw(10) << left << "Months" << setw(10) << left << "Weight" << endl;
	cout << "---------------------" << endl;

	for(int count = 1; count <= months; count++)
	{
		monthLoss = count*WEIGHT_LOSS;
		newWeight = startWeight - monthLoss;
		cout << setw(10) << left << count << setw(10) << left << newWeight << endl;
	}


	return 0;
}

