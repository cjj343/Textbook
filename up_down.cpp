#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>

using namespace std;


void placeCursor(HANDLE, int, int);

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	string up = "UP", down = "DOWN";

	int count = 1;

	system("CLS");

	do
	{
		for(int i = 1; i <= 25; i++)
		{
			placeCursor(screen, 24 - i, 36);
			cout << up;
			placeCursor(screen, i, 41);
			cout << down;

			Sleep(500);
			system("CLS");
		}

		count++;

	}while(count <= 3);

	return 0;
}

void placeCursor(HANDLE screen, int row, int col)
{
	COORD position;
	position.Y = row;
	position.X = col;
	SetConsoleCursorPosition(screen, position);
}

	





