//This program is a math tutor for stupid children
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	int a, b, sum, correctSum;
	char user1;
	unsigned seed;
	const int MAX_VALUE = 10,
	      MIN_VALUE = 1;
	
	seed = time(0);
	srand(seed);

	a = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
	b = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

	correctSum = a + b;

	cout << setw(4) << right << a << endl;
	cout << setw(1) << "+" << setw(3) << right << b << endl;
	cout << setw(2) << "----" << endl;

	cin >> sum;

	if(sum == a + b)
		{
			cout << "Correct!" << endl;
		}
	if(sum != a + b)
		{
			cout << "The correct answer was " << correctSum << endl;
		}

	cout << "Would you like another problem? (Y or N)" << endl;
	cin >> user1;

	if(user1 == 89)
	{
		do
		{
			a = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
			b = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

			correctSum = a + b;

			cout << setw(4) << right << a << endl;
			cout << setw(1) << "+" << setw(3) << right << b << endl;
			cout << setw(2) << "----" << endl;
			cin >> sum;

			if(sum == a + b)
			{
				cout << "Correct!" << endl;
			}	
			if(sum != a + b)
			{
				cout << "The correct answer was " << correctSum << endl;
			}

			cout << "Would you like another problem? (Y or N)" << endl;
			cin >> user1;
		}while(user1 == 89);
	}

	return 0;
}

