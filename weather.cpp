#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

const int ROW = 3, COL = 30, MAX = 90;
void inputData(char [ROW][COL]);
void printData(char [ROW][COL]);

int main()
{
	char weather[ROW][COL];

	inputData(weather);
	printData(weather);

return 0;
}

void inputData(char array1[][COL])
{
	ifstream inputFile;

	inputFile.open("RainOrShine.dat");

	if(!inputFile)
		cout << "File open error!" << endl;
	for(int r = 0; r < ROW; r++)
	{
		for(int c = 0; c < COL; c++)
		{
			inputFile >> array1[r][c];
		}
	}

	inputFile.close();
}


void printData(char array1[][COL])
{
	int rainy, cloudy, sunny;


	cout << setw(10) << left << "Month" << setw(7) << "Rain" << setw(7) << "Cloud" << setw(7) << "Sun" << endl;

	for(int r = 0; r < ROW; r++)
	{
		rainy = cloudy = sunny = 0;

		switch(r)
		{
			case 0: cout << setw(10) << left << "June:";
				break;
			case 1: cout << setw(10) << left << "July:";
				break;
			case 2: cout << setw(10) << left << "August:";
				break;
		}
		for(int c = 0; c < COL; c++)
		{
			if(array1[r][c] == 'R')
			{
				rainy++;
			}
			else if(array1[r][c] == 'C')
			{
				cloudy++;
			}
			else if(array1[r][c] == 'S')
			{
				sunny++;
			}
		}

		cout << setw(7) << rainy << setw(7) << cloudy << setw(7) << sunny << endl;
	}
}
