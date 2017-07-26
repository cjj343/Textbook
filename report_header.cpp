#include <iostream>
#include <string>

using namespace std;

class Header
{
	private: string name, type, stars, space;
		 int lengthN, lengthT, totalLength;



	public: Header(string n, string t)
		{name = n; type = t;}

		Header()
		{ name = "ABC Industries"; type = "Report"; }

		void printStar();
		void setCompany(string);
		void setType(string);
		void findLengthN(string);
		void findLengthT(string);
		void printCompany();
		void printType();

};

void Header::printStar()
{
	if(lengthN > lengthT)
	{
		stars.assign(lengthN + 20, '*');
		totalLength = lengthN + 20;
		cout << stars << endl;
	}

	else if(lengthT > lengthN)
	{
		stars.assign(lengthT + 20, '*');
		cout << stars << endl;
		totalLength = lengthT + 20;

	}

	else
	{
		stars.assign(lengthN + 20, '*');
		cout << stars << endl;
		totalLength = lengthN + 20;

	}
}

void Header::setCompany(string n)
{
	name = n;
}

void Header::setType(string t)
{
	type = t;
}

void Header::findLengthN(string n)
{
	lengthN = n.length();
}

void Header::findLengthT(string t)
{
	lengthT = t.length();
}

void Header::printCompany()
{
	space.assign(((totalLength - lengthN)/2), ' ');
	cout << space;
	cout << name;
	space.assign(((totalLength - lengthN)/2), ' ');
	cout << space;
}

void Header::printType()
{
	space.assign(((totalLength - lengthT)/2), ' ');
	cout << space;
	cout << type;
	space.assign(((totalLength - lengthN)/2), ' ');
	cout << space;
}


int main()
{
	Header info;

	string n, t;


	cout << "What is the company name?" << endl;
	getline(cin, n);
	info.setCompany(n);
	info.findLengthN(n);

	cout << "What is the report type?" << endl;
	getline(cin, t);
	info.setType(t);
	info.findLengthT(t);

	info.printStar();
	cout << endl;
	info.printCompany();
	cout << endl;
	info.printType();
	cout << endl;
	cout << endl;
	info.printStar();


return 0;
}


