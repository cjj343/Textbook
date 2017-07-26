//This program finds prime numbers
#include<iostream>
using namespace std;

bool isPrime(int);

int main()
{
	int num = 0;
	bool result = true;

	do
	{

	if(num == 0 || num == 1)
		result = false;
	if(num != 1 && num!= 0)
	{
		result = isPrime(num);
	}

	if(result)
	{
		cout << num << endl;
	}

	num++;

	}while(num <= 1000);

	return 0;
}

bool isPrime(int arg1)
{
	for(int i = 2; i < arg1; i++)
	{
		if(arg1%i == 0)
		{
			return false;
		}
	}
	
	return true;
}
