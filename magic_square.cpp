#include <iostream>
#include <ctime>

using namespace std;

//const int MIN = 1, MAX = 9;

//int randNum();
//void fillSquare(int [3][3]);
void printSquare(const int [3][3]);
bool testSquare(const int [3][3]);

int main()
{
	int magicSquare[3][3] = {4,9,2,3,5,7,8,1,6};
//	int seed;
	int count = 0;
	bool result;
//	seed = time(0);
//	srand(seed);
	
	do
	{
	count++;
//	fillSquare(magicSquare);
	result = testSquare(magicSquare);
	}while(!result);

	if(result)
	{
		printSquare(magicSquare);
		cout << "I found the magic square after " << count << " attempts!" << endl;
	}
}
/*
void fillSquare(int array1[3][3])
{
	for(int row = 0; row <3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			array1[row][col] = randNum();

		}

	}
}
*/

void printSquare(const int array1[3][3])
{
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			cout << "|" << array1[row][col] << "|";
		}
		cout << endl;
	}
}

bool testSquare(const int array1[3][3])
{
	int test;

	test = array1[0][0] + array1[0][1] + array1[0][2];

		if(test == array1[1][0] + array1[1][1] + array1[1][2])
		{
			if(test == array1[2][0] + array1[2][1] + array1[2][2])
			{
				if(test == array1[0][0] + array1[1][0] + array1[2][0])
				{
					if(test == array1[0][1] + array1[1][1] + array1[2][1])
					{
						if(test == array1[0][2] + array1[1][2] + array1[2][2])
						{
							if(test == array1[0][0] + array1[1][1] + array1[2][2])
							{
								if(test == array1[2][0] + array1[1][1] + array1[0][2])
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
						else
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				else 
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
		
}
/*
int randNum()
{
	int number, val;
	static bool testArray[9] = {false, false, false, false, false, false, false, false, false};

	number = (rand() % (MAX - MIN +1))+MIN;
	val = number - 1;

	while(testArray[val])
	{
			number = (rand() % (MAX - MIN +1))+MIN;
			val = number - 1;
	}

	testArray[val] = true;
		

	return number;
	

}
*/





