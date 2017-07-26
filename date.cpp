#include <iostream>
#include <string>

using namespace std;

class Date
{
	private: int month, day, year;
		 string mon;



	public:

	Date(int m = 1, int d = 1, int y = 2001)
	{month = m; day = d; year = y;}

	bool setMonth(int);
	bool setDay(int);
	bool setYear(int);
	void getMDY();
	void getMonthDY();
	void getDMonthY();
	void convert(int);

};

void Date::convert(int m)
{
	switch(month)
	{
		case 1: mon = "January";
			break;
		case 2: mon = "Febuary";
			break;
		case 3: mon = "March";
			break;
		case 4: mon = "April";
			break;
		case 5: mon = "May";
			break;
		case 6: mon = "June";
			break;
		case 7: mon = "July";
			break;
		case 8: mon = "August";
			break;
		case 9: mon = "September";
			break;
		case 10: mon = "October";
			 break;
		case 11: mon = "November";
			 break;
		case 12: mon = "December";
			 break;
	}
}

bool Date::setMonth(int m)
{
	if(m < 1 || m > 12)
		return false;
	else
       		month = m;
		return true;
}

bool Date::setDay(int d)
{ 
	int testVal1, testVal2, testVal3;

	testVal1 = year%100;
	testVal2 = year%400;
	testVal3 = year%4;

	if(month == 2)
	{
		if(testVal1 == 0 && testVal2 == 0)
		{
			if(d > 29 || d < 1)
				return false;
			else
				day = d;
		       		return true;	
		}
		else if(testVal1 != 0 && testVal3 == 0)
		{
			if(d > 29 || d < 1)
				return false;
			else
				day = d;
		       		return true;	
		}		
		else
		{
			if(d > 28 || d < 1)
				return false;
			else
				day = d;
		       		return true;	
		}
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		if(d < 1 || d > 30)
			return false;
		else
			day = d;
	       		return true;	
	}
	else
	{
		if(d < 1 || d > 31)
			return false;
		else
			day = d;
	       		return true;	
	}

}

bool Date::setYear(int y)
{
	if(y < 0)
		return false;
	else
		year = y;
		return true;
}

void Date::getMDY()
{
	cout << month << "/" << day << "/" << year << endl;
}

void Date::getMonthDY()
{
	cout << mon << " " << day << ", " << year << endl;

}

void Date::getDMonthY()
{
	cout << day << " " << mon << " " << year << endl;
}


	 


int main()
{
	Date user;
	int m, d, y;

	cout << "Enter a date." << endl;

	cout << "Year: ";
	cin >> y;
	user.setYear(y);
	while(!user.setYear(y))
	{
		cout << "Please enter valid date." << endl;
		cin >> y;
		user.setYear(y);
	}

	cout << "Month: ";
	cin >> m;
	while(!user.setMonth(m))
	{
		cout << "Please enter valid date." << endl;
		cin >> m;
		user.setMonth(m);
	}

	user.convert(m);

	cout << "Day: ";
	cin >> d;
	user.setDay(d);
	while(!user.setDay(d))
	{
		cout << "Please enter valid date." << endl;
		cin >> d;
		user.setDay(d);
	}



	user.getMDY();
	user.getMonthDY();
	user.getDMonthY();


return 0;
}
