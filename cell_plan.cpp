//This program generates a cell phone bill
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	const double MONTH_A = 39.99, MAX_A = 450, ADD_A = .45, MONTH_B = 59.99, MAX_B = 900, ADD_B = .40, MONTH_C = 69.99;
	int minutes, choice;
	string name;
	double planA, planB, planC, savingsB, savingsC, savingsA;

	cout << "Please enter your name: " << endl;
	getline(cin, name);
	cout << "How many minutes did you use this month?" << endl;
	cin >> minutes;

	if(minutes >= 0 && minutes <= MAX_A)
	{
		planA = MONTH_A;
		planB = MONTH_B;
		planC = MONTH_C;
	}
	else if(minutes > MAX_A && minutes <= MAX_B)
	{
		planA = ((minutes - MAX_A)*ADD_A)+MONTH_A;
		planB = MONTH_B;
		planC = MONTH_C;
	}
	else if(minutes > MAX_B)
	{
		planA = ((minutes - MAX_A)*ADD_A)+MONTH_A;
		planB = ((minutes - MAX_B)*ADD_B)+MONTH_B;
		planC = MONTH_C;
	}
	else
		cout << "Please enter a valid number of minutes" << endl;

	cout << "Please select your plan.\n\n";
	cout << "1: Package A" << endl;
	cout << "2: Package B" << endl;
	cout << "3: Package C" << endl;

	cin >> choice;

	switch(choice)
	{
		case 1:	if(planA < planB && planA < planC)
			{
			cout << endl;
			cout << setw(5) << " " << name << endl << endl;
			cout << setw(20) << left << "Plan:" << "A" << endl;
			cout << setw(20) << left << "Minutes Used:" << minutes << endl;
			cout << setw(20) << left << "Total Bill:" << "$ " << planA << endl;
			}
			else if(planB < planA)
			{
				if(planC < planA)
				{
				savingsC = planA - planC;
				savingsB = planA - planB;
				cout << endl;
				cout << setw(5) << " " << name << endl << endl;
				cout << setw(20) << left << "Plan:" << "A" << endl;
				cout << setw(20) << left << "Minutes Used:" << minutes << endl;
				cout << setw(20) << left << "Total Bill:" << "$ " << planA << endl << endl;
				cout << "**" << "You could save $ " << savingsB << " with Package B" << setw(5) << left << "**" << endl;
				cout << "**" << "You could save $ " << savingsC << " with Package C" << setw(5) << left << "**" << endl;
				}
				else
				{
				savingsB = planA - planB;
				cout << endl;
				cout << setw(5) << " " << name << endl << endl;
				cout << setw(20) << left << "Plan:" << "A" << endl;
				cout << setw(20) << left << "Minutes Used:" << minutes << endl;
				cout << setw(20) << left << "Total Bill:" << "$ " << planA << endl << endl;
				cout << "**" << "You could save $ " << savingsB << " with Package B" << setw(5) << left << "**" << endl;
				}
			}
			break;	
		case 2:	if(planB < planC && planB < planA)
			{
			cout << endl;
			cout << setw(5) << " " << name << endl << endl;
			cout << setw(20) << left << "Plan:" << "B" << endl;
			cout << setw(20) << left << "Minutes Used:" << minutes << endl;
			cout << setw(20) << left << "Total Bill:" << "$ " << planB << endl;
			}
			else if(planC < planB)
			{
				if(planA < planB)
				{
				savingsA = planB - planA;
				savingsC = planB - planC;
				cout << endl;
				cout << setw(5) << " " << name << endl << endl;
				cout << setw(20) << left << "Plan:" << "B" << endl;
				cout << setw(20) << left << "Minutes Used:" << minutes << endl;
				cout << setw(20) << left << "Total Bill:" << "$ " << planB << endl << endl;
				cout << "**" << "You could save $ " << savingsA << " with Package A" << setw(5) << left << "**" << endl;
				cout << "**" << "You could save $ " << savingsC << " with Package C" << setw(5) << left << "**" << endl;
				}
				else
				{
				savingsC = planB - planC;
				cout << endl;
				cout << setw(5) << " " << name << endl << endl;
				cout << setw(20) << left << "Plan:" << "B" << endl;
				cout << setw(20) << left << "Minutes Used:" << minutes << endl;
				cout << setw(20) << left << "Total Bill:" << "$ " << planB << endl << endl;
				cout << "**" << "You could save $ " << savingsC << " with Package C" << setw(5) << left << "**" << endl;
				}
			}
			break;		
		case 3:	if(planC < planA && planC < planB)
			{
			cout << endl;
			cout << setw(5) << " " << name << endl << endl;
			cout << setw(20) << left << "Plan:" << "C" << endl;
			cout << setw(20) << left << "Minutes Used:" << minutes << endl;
			cout << setw(20) << left << "Total Bill:" << "$ " << planC << endl;
			}
			else if(planB < planC)
			{
				if(planA < planC)
				{
				savingsA = planC - planA;
				savingsB = planC - planB;
				cout << endl;
				cout << setw(5) << " " << name << endl << endl;
				cout << setw(20) << left << "Plan:" << "C" << endl;
				cout << setw(20) << left << "Minutes Used:" << minutes << endl;
				cout << setw(20) << left << "Total Bill:" << "$ " << planC << endl << endl;
				cout << "**" << "You could save $ " << savingsA << " with Package A" << setw(5) << left << "**" << endl;
				cout << "**" << "You could save $ " << savingsB << " with Package B" << setw(5) << left << "**" << endl;
				}
				else
				{
				savingsB = planC - planB;
				cout << endl;
				cout << setw(5) << " " << name << endl << endl;
				cout << setw(20) << left << "Plan:" << "C" << endl;
				cout << setw(20) << left << "Minutes Used:" << minutes << endl;
				cout << setw(20) << left << "Total Bill:" << "$ " << planC << endl << endl;
				cout << "**" << "You could save $ " << savingsB << " with Package B" << setw(5) << left << "**" << endl;
				}
			}
			break;	
		default: cout << "Please enter a valid selection" << endl;
	}

	return 0;	

}

