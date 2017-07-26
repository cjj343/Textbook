//This program calculates the gross and net revenue of a movie theater
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const double ADULT_TICKET = 10,
	      CHILD_TICKET = 6;
	const double REVENUE_PERC = .80,
	      DISTRIBUTOR_PERC = .20;
	double grossRev, distributor, netRev, childTic, adultTic;
	string movieName;

	cout << "What is the name of the movie?\n";
	getline(cin, movieName);

	cout << "How many adult tickets were sold?\n";
	cin >> adultTic;

	cout << "How many child tickets were sold?\n";
	cin >> childTic;

	grossRev = (adultTic*ADULT_TICKET) + (childTic*CHILD_TICKET);
	distributor = grossRev*DISTRIBUTOR_PERC;
	netRev = grossRev - distributor;

	cout << left << setw(60) << "Movie Name:" << left << "\"" << movieName << "\"" << endl;
	cout << left << setw(60) << "Adult Tickets sold:" << left << adultTic << endl;
	cout << left << setw(60) << "Child Tickets sold:" << left << childTic << endl;
	cout << left << setw(60) << "Gross Box Office Revenue:" << left << "$ " << grossRev << endl;
	cout << left << setw(59) << "Amount paid to distributor:" << left << "-$ " << distributor << endl;
	cout << left << setw(60) << "Net Box Office Revenue:" << left << "$ " << netRev << endl;
	      		
			
	return 0;
}

