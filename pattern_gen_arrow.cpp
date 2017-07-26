//This program generates a triangle pattern
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{

	for(int row = 0; row <= 6; row += 2)
	{

		if(row == 6)
		{
			for(int count = 1; count <= 13; count ++)
			{
				cout << "+";
			}
		}
		if(row != 6)
		{
			for(int space = 1; space <= 6; space ++)
			{
				cout << " ";
			}
			for(int plus = 0; plus <= row; plus++)
			{
				cout << "+";
			}
		}

		cout << endl;
	}




	for(int row1 = 0; row1 <= 4; row1 += 2)
	{
		for(int space = 1; space <= 6; space ++)
		{
			cout << " ";
		}
		for(int plus1 = 4; plus1 >= row1; plus1--)
		{
			cout << "+";
		}
		cout << endl;
	}


	return 0;
}

