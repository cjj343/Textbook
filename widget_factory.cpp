#include <iostream>
#include <string>


const int FACTORY_HOURS = 16,
	  WIDGETS_PH = 10;

using namespace std;

class Widgets
{
	private: double user, days, hours;

		 void calculate(double);

	public: Widgets(double u)
		{ user = u; }

		Widgets()
		{ user = 0; }

		void validate(double);
		double getDays();


};

void Widgets::validate(double u)
{
	if(u <= 0)
	{
		while(u <= 0)
		{
			cout << "Please enter a valid number." << endl;
			cin >> u;
		}

		user = u;
	}
	else
	{
		user = u;
	}

	calculate(user);
}

void Widgets::calculate(double user)
{
	hours = user/WIDGETS_PH;
	days = hours/FACTORY_HOURS;
}

double Widgets::getDays()
{
	return days;
}



int main()
{
	Widgets user;

	double u, days;

	cout << "How many widgets are you ordering?" << endl;
	cin >> u;
	user.validate(u);

	days = user.getDays();

	cout << "It will take " << days << " days to make that many widgets." << endl;

return 0;
}


