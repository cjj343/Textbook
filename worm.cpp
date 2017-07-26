#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void position1middle();
void position1bottom();
void position2middle();
void position2bottom();
void position3middle();
void position3bottom();
void position4middle();
void position4bottom();
void position5middle();
void position5bottom();
void position6middle();
void position6bottom();


int main()
{
	string spaces, clear;
	int count = 1;
	int i = 0;

	do
	{

		clear.assign(75, '\n');
		cout << clear;
		spaces.assign(i, ' ');
		cout << spaces;
		cout << "        \\/" << endl;


		if(count == 1)
		{
			cout << spaces;
			position1middle();
			cout << spaces;
			position1bottom();
		}

		
		else if(count == 2)
		{
			cout << spaces;
			position2middle();
			cout << spaces;
			position2bottom();
		}

		
		else if(count == 3)
		{
			cout << spaces;
			position3middle();
			cout << spaces;
			position3bottom();
		}

		
		else if(count == 4)
		{
			cout << spaces;
			position4middle();
			cout << spaces;
			position4bottom();
		}

		else if(count == 5)
		{
			cout << spaces;
			position5middle();
			cout << spaces;
			position5bottom();
		}

		else if(count == 6)
		{
			cout << spaces;
			position6middle();
			cout << spaces;
			position6bottom();
		}

		count++;

		if(count > 6)
		{
			count = 1;
		}
		
		i++;
		Sleep(500);

	}while(true);

	return 0;
}

void position1middle()
{
	cout << "        OO" << endl;
}

void position1bottom()
{

	cout << "OOOOOOOOOO";
}

void position2middle()
{
	cout << "      O OO" << endl;
}

void position2bottom()
{
	cout << " OOOOO OOO";
}

void position3middle()
{
	cout << "     OO OO" << endl;
}

void position3bottom()
{
	cout << "  OOO  OOO";
}


void position4middle()
{
	cout << "    OOO OO" << endl;
}


void position4bottom()
{
	cout << "   O   OOO";
}

void position5middle()
{
	cout << "     OO OO" << endl;
}

void position5bottom()
{
	cout << "  OOO  OOO";
}

void position6middle()
{
	cout << "      O OO" << endl;
}

void position6bottom()
{
	cout << " OOOOO OOO";
}





