#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

class Coin
{
	private: string side;
		 int num;
		 int heads, tails;
		 unsigned seed;

	public: Coin();
		void toss();
		string getSide();
		int getTotalHeads();
		int getTotalTails();
};

int main()
{
	string side;
	int heads, tails;

	Coin flip;

	for(int i = 1; i <= 20; i++)
	{
		flip.toss();
		side = flip.getSide();
		cout << side << endl;
		cout << "Tossing again..." << endl;
		Sleep(500);
	}

	heads =	flip.getTotalHeads();
	tails = flip.getTotalTails();

	cout << "There were " << heads << " heads and " << tails << " tails." << endl;

	return 0;
}

Coin::Coin()
{
	heads = 0;
	tails = 0;
	seed = time(0);
	srand(seed);
	num = (rand() % (2 - 1 + 1)) + 1;

	if(num == 1)
	{
		side = "Heads";
	}
	
	else if(num == 2)
	{
		side = "Tails";
	}
}

void Coin::toss()
{
	num = (rand() % (2 - 1 + 1)) + 1;

	if(num == 1)
	{
		side = "Heads";
		heads++;
	}
	
	else if(num == 2)
	{
		side = "Tails";
		tails++;
	}
}

string Coin::getSide()
{
	return side;
}

int Coin::getTotalHeads()
{
	return heads;
}

int Coin::getTotalTails()
{
	return tails;
}
	


	





