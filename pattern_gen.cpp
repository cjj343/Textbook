//This program generates a diamond pattern
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	for(int row = 0; row <= 3; row++)
	{
		int mod = 4;
		for(int space = 2; space >= row; space--)
		{
			cout << " ";
			mod --;
		}
			for(int plus = 1; plus <= mod; plus++)
			{
				cout << "+";
			}
				for(int plus1 = 2; plus1 <= mod; plus1++)
				{
					cout << "+";
				}
					for(int space2 = 2; space2 >= row; space2--)
					{
						cout << " ";
					}
				
		cout << endl;
	}

	for(int row1 = 0; row1 <= 2; row1++)
	{
		for(int space3 = 0; space3 <= row1; space3++)
		{
			cout << " ";
		}
			for(int plus2 = 2; plus2 >= row1; plus2--)
			{
				cout << "+";
			}
			for(int plus3 = 1; plus3 >= row1; plus3--)
			{
				cout << "+";
			}
		cout << endl;
	}


	return 0;
}

