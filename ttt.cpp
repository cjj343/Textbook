#include <iostream>
#include <iomanip>

using namespace std;

void printBoard(const char [3][3]);
void placeX(char [3][3], int, int);
void placeO(char [3][3], int, int);
bool testX(const char [3][3]);
bool testO(const char [3][3]);
void clearBoard(char [3][3]);
void validate(int &);
void checkPos(char [3][3], int &, int &);
bool checkFull(const char [3][3]);

int main()
{
	char board[3][3] = {'*','*','*','*','*','*','*','*','*'};
	int x, y;
	bool test, xmem, omem, full;
	char user;

	cout << "\n" << setw(20) << " " << "Rules" << "\n\n";
	cout << "1. Player 1 is X. Player 2 is O." << endl;
	cout << "2. Enter the row (1 to 3) then enter, followed by the column (1 to 3) then enter." << endl;

	printBoard(board);
	cout << "\n\n";

	do
	{

	do
	{
		cout << "Player 1..." << endl;
		cin >> x;
		validate(x);
		cin >> y;
		validate(y);
		checkPos(board, x, y);
		placeX(board, x, y);
		printBoard(board);
		full = checkFull(board);
		cout << "\n\n";
		test = testX(board);
		xmem = test;


		if(!test && !full)
		{
			cout << "Player 2..." << endl;
			cin >> x;
			validate(x);
			cin >> y;
			validate(y);
			checkPos(board, x, y);
			placeO(board, x, y);
			printBoard(board);
			full = checkFull(board);
			cout << "\n\n";
			test = testO(board);
			omem = test;
		}

	}while(!full && !test);

	if(xmem)
	{
		cout << "Player 1 is the winner!" << endl;
	}
	else if(omem)
	{
		cout << "Player 2 is the winner!" << endl;
	}
	else
	{
		cout << "It was a tie." << endl;
	}

	cout << "Would you like to play again? (Y or N)" << endl;
	cin >> user;

	if(user == 'Y' || user == 'y')
	{
		clearBoard(board);
		printBoard(board);
		cout << "\n\n";
	}

	}while(user == 'Y' || user == 'y');

return 0;
}

void printBoard(const char array1[3][3])
{
	for(int x = 0; x < 3; x++)
	{
		cout << "\n" << " ";
		for(int y = 0; y < 3; y++)
		{
			cout << array1[x][y] << " ";
		}
	}
}

void placeX(char array1[3][3], int x, int y)
{

	array1[x-1][y-1] = 'X';
}

void placeO(char array1[3][3], int x, int y)
{

	array1[x-1][y-1] = 'O';
}

bool testX(const char array1[3][3])
{
	if(array1[0][0] == 'X' && array1[0][1] == 'X' && array1[0][2] == 'X')
		return true;
	else if(array1[1][0] == 'X' && array1[1][1] == 'X' && array1[1][2] == 'X')
		return true;
	else if(array1[2][0] == 'X' && array1[2][1] == 'X' && array1[2][2] == 'X')
		return true;
	else if(array1[0][0] == 'X' && array1[1][0] == 'X' && array1[2][0] == 'X')
		return true;
	else if(array1[0][1] == 'X' && array1[1][1] == 'X' && array1[2][1] == 'X')
		return true;
	else if(array1[0][2] =='X' && array1[1][2] == 'X' && array1[2][2] == 'X')
		return true;
	else if(array1[0][0] == 'X' && array1[1][1] == 'X' && array1[2][2] == 'X')
		return true;
	else if(array1[2][0] == 'X' && array1[1][1] == 'X' && array1[0][2] == 'X')
		return true;
	else
		return false;
}

bool testO(const char array1[3][3])
{
	if(array1[0][0] == 'O' && array1[0][1] == '0' && array1[0][2] == '0')
		return true;
	else if(array1[1][0] == 'O' && array1[1][1] == 'O' && array1[1][2] == 'O')
		return true;
	else if(array1[2][0] == 'O' && array1[2][1] == 'O' && array1[2][2] == 'O')
		return true;
	else if(array1[0][0] == 'O' && array1[1][0] == 'O' && array1[2][0] == 'O')
		return true;
	else if(array1[0][1] == 'O' && array1[1][1] == 'O' && array1[2][1] == 'O')
		return true;
	else if(array1[0][2] == 'O' && array1[1][2] == 'O' && array1[2][2] == 'O')
		return true;
	else if(array1[0][0] == 'O' && array1[1][1] == 'O' && array1[2][2] == 'O')
		return true;
	else if(array1[2][0] == 'O' && array1[1][1] == 'O' && array1[0][2] == 'O')
		return true;
	else
		return false;
}

void clearBoard(char array1[3][3])
{
	for(int x = 0; x < 3; x++)
	{
		for(int y = 0; y < 3; y++)
		{
			array1[x][y] = '*';
		}
	}
}

void validate(int &x)
{
	while(x < 1 || x > 3)
	{
		cout << "Enter a valid coordinate." << endl;
		cin >> x;
	}

}

void checkPos(char array1[3][3], int &x, int &y)
{
	if(array1[x-1][y-1] == 'O')
	{
	while(array1[x-1][y-1] == 'O')
	{
		cout << "This postition is already in play. Choose again." << endl;
		cin >> x;
		while(x < 1 || x > 3)
		{
			cout << "Enter a valid coordinate." << endl;
			cin >> x;
		}
		cin >> y;
		while(y < 1 || y > 3)
		{
			cout << "Enter a valid coordinate." << endl;
			cin >> y;
		}
	}
	}

	else if(array1[x-1][y-1] == 'X')
	{
	while(array1[x-1][y-1] == 'X')
	{
		cout << "This postition is already in play. Choose again." << endl;
		cin >> x;
		while(x < 1 || x > 3)
		{
			cout << "Enter a valid coordinate." << endl;
			cin >> x;
		}
		cin >> y;
		while(y < 1 || y > 3)
		{
			cout << "Enter a valid coordinate." << endl;
			cin >> y;
		}
	}
	}

}

bool checkFull(const char array1[3][3])
{
	bool test = true;

	for(int x = 0; x < 3; x++)
	{
		for(int y = 0; y < 3; y++)
		{
			if(array1[x][y] == '*')
			{
				test = false;
			}
		}
	}

	return test;
}

