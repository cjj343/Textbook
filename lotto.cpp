#include <iostream>
#include <ctime>

using namespace std;

int randNum();
void fillLotto(int [5], int [5]);
void fillUser(int [5]);
int testNum(int [5], int [5]);

const int MIN = 1, MAX = 9;

int main()
{
	int lotto[5];
	int user[5];
	int correct[5];
	int result;
	int seed;
	seed = time(0);
	srand(seed);

	fillLotto(lotto, correct);
	fillUser(user);
	result = testNum(lotto, user);

	if(result == 5)
	{
		cout << "You won the lotto!" << endl;
	}

	else
	{
		cout << "You didnt win. You got " << result << " number(s) correct" << endl;
		cout << "The correct numbers were..." << endl;
		for(int i = 0; i < 5; i++)
		{
			cout << correct[i] << endl;
		}
	}

return 0;
}

void fillLotto(int array1[5], int array2[5])
{
	for(int i = 0; i < 5; i++)
	{
		array1[i] = randNum();
	}

	for(int x = 0; x < 5; x++)
	{
		array2[x] = array1[x];
	}
}


void fillUser(int array2[5])
{
	cout << "Choose five lotto numbers. (1 through 9)" << endl;

	for(int i = 0; i < 5; i++)
	{
		cin >> array2[i];
		while(array2[i] < 1 || array2[i] > 9)
		{
			cout << "Please enter a valid number" << endl;
			cin >> array2[i];
		}
	}
}

int testNum(int array1[5], int array2[5])
{
	int correct = 0;

	for(int i = 0; i < 5; i++)
	{
		for(int x = 0; x < 5; x++)
		{
			if(array2[i] == array1[x])
			{
				array1[x] = array2[i] = 0;
			}
		}
	}

	for(int a = 0; a < 5; a++)
	{
		if(array2[a] == 0)
		{
			correct++;
		}
	}

	return correct;
}


int randNum()
{
	int number;

	number = (rand() % (MAX - MIN +1))+MIN;

	return number;
}

