#include <iostream>
#include <string>

using namespace std;

class Converter
{
	private: string user;
	
	public: string upperCase(string);
		string properName(string);
};

string Converter::upperCase(string str)
{
	string upper;

	for(int i = 0; i < str.length(); i++)
	{
		upper += toupper(str.at(i));
	}

	return upper;
}

string Converter::properName(string str)
{
	string upper;

	upper += toupper(str.at(0));

	for(int i = 1; i < str.length(); i++)
	{
		upper += str.at(i);
	}
	
	return upper;
}

int main()
{
	string str, upper, proper;
	Converter var;
	char user;

	do
	{
		cout << "Enter a string and I will convert it." << endl;
		getline(cin, str);

		upper = var.upperCase(str);
		proper = var.properName(str);

		cout << upper << endl;
		cout << proper << endl;

		cout << "Would you like to enter another string? (Y or N)" << endl;
		cin >> user;
	}while(user == 'Y' || user == 'y');

		
return 0;
}
