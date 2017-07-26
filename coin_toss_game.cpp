#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

class Coin
{
	private: int num;
		 unsigned seed;

	public: Coin();
		bool toss();
};

int main()
{
	Coin quarter, dime, nickel;
	int total = 0;

	cout << "This is a game." << endl;

	do
	{

	if(quarter.toss())
	{
		cout << "Heads, +25" << endl;
		total = total + 25;
	}
	if(dime.toss())
	{
		cout << "Heads, +10" << endl;
		total = total + 10;
	}
	if(nickel.toss())
	{
		cout << "Heads, +5" << endl;
		total = total + 5;
	}

	}while(total < 100);

	if(total == 100)
		cout << "You win!" << endl;
	else if(total > 100)
		cout << "You lose" << endl;
	
	return 0;
}

Coin::Coin()
{
	seed = time(0);
	srand(seed);
	num = (rand() % (2 - 1 + 1)) + 1;
}

bool Coin::toss()
{
	num = (rand() % (2 - 1 + 1)) + 1;

	if(num == 1)
	{
		return true;
	}
	
	else
	{
		return false;
	}
}


	





