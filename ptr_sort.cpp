#include <iostream>
#include <string>

using namespace std;

struct Person
{
	string name;
	int age;

	Person(string n, int a)
	{ name = n; age = a; }
};

int main()
{
	Person data[9] = { Person("A Bob", 15), Person("Z Bob", 10),Person("C Bob", 35),Person("B Bob", 15), Person("G Bob", 23), Person("F Bob", 10), Person("T Bob", 56), Person("S Bob", 30), Person("L Bob", 16) };
	Person *ptr;
	string tempName;
	int tempAge;
	bool test;


	ptr = data;

	for(int i = 0; i < 9; i++)
	{
		ptr[i] = data[i];
	}

	do
	{
		test = false;
	
		for(int i = 0; i < 8; i++)
		{
			if(ptr[i].name > ptr[i+1].name)
			{
				tempName = ptr[i].name;
				tempAge = ptr[i].age;
				ptr[i] = ptr[i+1];
				ptr[i+1].name = tempName;
				ptr[i+1].age = tempAge;
				test = true;
			}
		
		}
	}while(test);

	for(int i = 0; i < 9; i++)
	{
		cout << ptr[i].name << ": " << ptr[i].age << endl;
	}

	return 0;
}

/*
	do
	{
		test = false;
	
		for(int i = 0; i < 8; i++)
		{
			if(ptr[i].name > ptr[i+1].name)
			{
				tempPtr = ptr[i];
				ptr[i] = ptr[i+1];
				ptr[i+1] = tempPtr;
				test = true;
			}
		
		}
	}while(test);

	for(int i = 0; i < 9; i++)
	{
		ptr[i] = data[i];
	}
	*/
