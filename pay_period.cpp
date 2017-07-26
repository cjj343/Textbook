//This program displays pay period info
#include <iostream>
using namespace std;

int main ()
{
	
	float salary, biMonth, biWeek;
	salary = 32500;
	biMonth = salary/24;
	biWeek = salary/26;

	cout << "Each paycheck will be " << biMonth << " dollars if paid twice a month and " << biWeek << " dollards if paid bi-weekly.\n";
	return 0;
	
}
	


	
