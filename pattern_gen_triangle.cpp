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
		for(int plus = 0; plus <= row; plus++)
		{
			cout << "+";
		}

		cout << endl;
	}

	for(int row1 = 0; row1 <= 4; row1 += 2)
	{
		for(int plus1 = 4; plus1 >= row1; plus1--)
		{
			cout << "+";
		}
		cout << endl;
	}


	return 0;
}

