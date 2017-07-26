//This program prints an invoice
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

enum TreeChoice { choice1 = 1, choice2, choice3, choice4 };

int main()
{
	const double PRICE1 = 39.00,
	      PRICE2 = 69.00,
	      PRICE3 = 99.00,
	      PRICE4 = 199.00,
	      DELIVERY = 20.00,
	      MAX_DELIVERY = 100.00;

	int numTrees, totalTrees, choice;
	char user1;
	double totalCost, totalTreeCost, treeCost, deliveryCost, plantingCost;


	cout << "Please select a tree heighth" << endl;
	cout << "1: Less than 3 feet" << endl;
	cout << "2: 3 to 5 feet" << endl;
	cout << "3: 6 to 8 feet" << endl;
	cout << "4: Over 8 feet" << endl;

	cin >> choice;

	switch(choice)
	{
		case choice1: cout << "How many trees of this heigth would you like to purchase?" << endl;
			      cin >> numTrees;
			      treeCost = numTrees * PRICE1;
			      break;
		case choice2: cout << "How many trees of this heigth would you like to purchase?" << endl;
			      cin >> numTrees;
			      treeCost = numTrees * PRICE2;
			      break;
		case choice3: cout << "How many trees of this heigth would you like to purchase?" << endl;
			      cin >> numTrees;
			      treeCost = numTrees * PRICE3;
			      break;
		case choice4: cout << "How many trees of this heigth would you like to purchase?" << endl;
			      cin >> numTrees;
			      treeCost = numTrees * PRICE4;
			      break;


	}

	totalTrees = numTrees;
	totalTreeCost = treeCost;

	cout << "Would you like to enter another selection?" << endl;
	cin >> user1;

	if((user1 == 'Y') || (user1 == 'y'))
	{
	do
	{

	cout << "Please select a tree heighth" << endl;
	cout << "1: Less than 3 feet" << endl;
	cout << "2: 3 to 5 feet" << endl;
	cout << "3: 6 to 8 feet" << endl;
	cout << "4: Over 8 feet" << endl;

	cin >> choice;

	switch(choice)
	{
		case choice1: cout << "How many trees of this heigth would you like to purchase?" << endl;
			      cin >> numTrees;
			      treeCost = numTrees * PRICE1;
			      break;
		case choice2: cout << "How many trees of this heigth would you like to purchase?" << endl;
			      cin >> numTrees;
			      treeCost = numTrees * PRICE2;
			      break;
		case choice3: cout << "How many trees of this heigth would you like to purchase?" << endl;
			      cin >> numTrees;
			      treeCost = numTrees * PRICE3;
			      break;
		case choice4: cout << "How many trees of this heigth would you like to purchase?" << endl;
			      cin >> numTrees;
			      treeCost = numTrees * PRICE4;
			      break;


	}

	totalTrees += numTrees;
	totalTreeCost += treeCost;

	cout << "Would you like to enter another selection?" << endl;
	cin >> user1;

	}while((user1 == 'Y') || (user1 == 'y'));
	}

	if(totalTrees >= 5)
		{
		deliveryCost = MAX_DELIVERY;
		}
	else if((totalTrees < 5) && (totalTrees > 0))
		{
		deliveryCost = totalTrees*DELIVERY;
		}

	plantingCost = totalTreeCost*.50;

	cout << "You are purchasing " << totalTrees << " trees for " << totalTreeCost << " Dollars." << endl;
	cout << "Would you like the trees delivered? (Y or N)" << endl;
	cout << "There is a $20 charge for each tree purchased up to a maximum of $100" << endl;
	cin >> user1;

	if((user1 == 'Y') || (user1 == 'y'))
		{
		cout << "Would you like the trees planted? (Y or N)" << endl;
		cout << "Planting costs 50 percent of the cost of the tree" << endl;
		cin >> user1;

		if((user1 == 'Y') || (user1 == 'y'))
				{
				
				totalCost = totalTreeCost + deliveryCost + plantingCost;

				cout << setw(5) << "   " << "Greenfields Landscaping" << endl;
				cout << setw(5) << "   " << "Evergreen Tree Purchase" << endl;
				cout << setw(30) << left << "Total trees:" << totalTrees << endl;
				cout << setw(30) << left << "Total Tree Cost:" << "$ " << totalTreeCost << endl;
				cout << setw(30) << left << "Delivery Cost:" << "$ " << deliveryCost << endl;
				cout << setw(30) << left << "Planting Cost:" << "$ " << plantingCost << endl;
				cout << setw(30) << left << "Total Cost:" << "$ " << totalCost << endl;
				}
		else
				{

				totalCost = totalTreeCost + deliveryCost;

				cout << setw(5) << "   " << "Greenfields Landscaping" << endl;
				cout << setw(5) << "   " << "Evergreen Tree Purchase" << endl;
				cout << setw(30) << left << "Total trees:" << totalTrees << endl;
				cout << setw(30) << left << "Total Tree Cost:" << "$ " << totalTreeCost << endl;
				cout << setw(30) << left << "Delivery Cost:" << "$ " << deliveryCost << endl;
				cout << setw(30) << left << "Total Cost:" << "$ " << totalCost << endl;
				}
		}
	else
		{

		totalCost = totalTreeCost;
			
		cout << setw(5) << "   " << "Greenfields Landscaping" << endl;
		cout << setw(5) << "   " << "Evergreen Tree Purchase" << endl;
		cout << setw(30) << left << "Total trees:" << totalTrees << endl;
		cout << setw(30) << left << "Total Tree Cost:" << "$ " << totalTreeCost << endl;
		cout << setw(30) << left << "Total Cost:" << "$ " << totalCost << endl;
		}
	

	return 0;
}

