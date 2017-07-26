//This program determines if two names are the same
#include<iostream>
#include<cctype>
#include<string>
using namespace std;

string upper(string);
void same(string, string);


int main()
{
	string name1, name2, upperName1, upperName2;

	cout << "Enter two names." << endl;

	getline(cin, name1);
	getline(cin, name2);

	upperName1 = upper(name1);
	upperName2 = upper(name2);

	same(upperName1, upperName2);

	return 0;

}

string upper(string arg1)
{
	string upperName;

	for(int count = 0; count < arg1.size(); count++)
	{
		upperName += toupper(arg1.at(count));
	}

	cout << upperName << endl;

	return upperName;
}

void same(string arg1, string arg2)
{
	if(arg1 == arg2)
	{
		cout << "These names are the same." << endl;
	}
	else
	{
		cout << "These names are not the same." << endl;
	}
}
