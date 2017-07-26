//This program is a math tutor for stupid children
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	int a, b, sum, correctSum, user, remainder, correctRemain;
	unsigned seed;
	const int MAX_VALUE = 100,
	      MIN_VALUE = 1;
	
	seed = time(0);
	srand(seed);

	do
	{
		cout << "Please make a selection." << endl << endl;
		cout << "1: Addition" << endl;
		cout << "2: Subtraction" << endl;
		cout << "3: Division" << endl;
		cout << "4: Multiplication" << endl;
		cout << "5: Quit" << endl;
		cin >> user;
		while(user < 1 || user > 5)
		{
			cout << "Please enter a valid selection" << endl;
			cin >> user;
		}

		cout << endl;

		switch(user)
		{
			case 1: a = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
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
				break;
			case 2: a = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
				b = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

				correctSum = a - b;

				cout << setw(4) << right << a << endl;
				cout << setw(1) << "-" << setw(3) << right << b << endl;
				cout << setw(2) << "----" << endl;

				cin >> sum;

				if(sum == a - b)
				{
				cout << "Correct!" << endl;
				}
				if(sum != a - b)
				{
				cout << "The correct answer was " << correctSum << endl;
				}
				break;
			case 3: a = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
				b = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
				
				if(a > b)
				{

				correctSum = a/b;
				correctRemain = a&b;

				cout << "Please enter the quotient followed by the remainder \n \n";

				cout << setw(4) << right << a << endl;
				cout << setw(1) << "/" << setw(3) << right << b << endl;
				cout << setw(2) << "----" << endl;

				cin >> sum;
				cin >> remainder;

				if(sum == a /b && remainder == a%b)
				{
				cout << "Correct!" << endl;
				}
				if(sum != a/b || remainder != a%b)
				{
				cout << "The correct answer was " << correctSum << " with a remainder of " << correctRemain << endl;
				}
				}
				
				if(a < b)
				{

				correctSum = b/a;
				correctRemain = b&a;

				cout << "Please enter the quotient followed by the remainder \n \n";

				cout << setw(4) << right << b << endl;
				cout << setw(1) << "/" << setw(3) << right << a << endl;
				cout << setw(2) << "----" << endl;

				cin >> sum;
				cin >> remainder;

				if(sum == b /a && remainder == b%a)
				{
				cout << "Correct!" << endl;
				}
				if(sum != b/a || remainder != b%a)
				{
				cout << "The correct answer was " << correctSum << " with a remainder of " << correctRemain << endl;
				}
				}

				break;
			case 4: a = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
				b = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

				correctSum = a*b;

				cout << setw(4) << right << a << endl;
				cout << setw(1) << "x" << setw(3) << right << b << endl;
				cout << setw(2) << "----" << endl;

				cin >> sum;

				if(sum == a * b)
				{
				cout << "Correct!" << endl;
				}
				if(sum != a * b)
				{
				cout << "The correct answer was " << correctSum << endl;
				}
				break;
		}
		}while(user != 5);

	
	return 0;
}

