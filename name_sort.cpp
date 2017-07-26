//This program sorts students alpha 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	string name1, name2, name3, largest, smallest;
	int num;

	cout << "How many students are in the class?" << endl;
	cin >> num;

	while(num < 2)
	{
		cout << "Wut? You need to have more than 1 student to sort!" << endl;
		cin >> num;
	}

	cin.ignore();

	cout << "Enter a name." << endl;
	getline(cin, name1);
	cout << "Enter another name." << endl;
	getline(cin, name2);

	if(name1 < name2)
	{
		smallest = name1;
		largest = name2;
	}
	if(name1 > name2)
	{
		smallest = name2;
		largest = name1;
	}

	for(int count = 3; count <= num; count++)
	{
		cout << "Enter another name." << endl;
		getline(cin, name3);

		if(name3 < smallest)
		{
			smallest = name3;
		}
		else if(name3 > largest)
		{
			largest = name3;
		}
	}

	cout << "The first student is " << smallest << endl;
	cout << "The last student is " << largest << endl;

	return 0;
}

