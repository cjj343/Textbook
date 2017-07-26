//This program converts number to letters
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
	char letter;
	int column = 0;

	for(int count = 32; count <= 127; count++)
	{
		column++;
		letter = count;
		cout << letter << " ";
		if(column%16==0)
			cout << endl;
		
	}

	return 0;
}

