//This program calculates average test scores, dropping the lowest
#include<iostream>
using namespace std;

void getScore(double &);
void calcAverage(double, double, double, double, double);
double findLowest(double, double, double, double, double);



int main()
{
	double s1, s2, s3, s4, s5;

	cout << "Enter 5 test scores." << endl;

	cin >> s1;
	getScore(s1);
	cout << "Score 1 is " << s1 << endl;

	cin >> s2;
	getScore(s2);
	cout << "Score 2 is " << s2 << endl;

	cin >> s3;
	getScore(s3);
	cout << "Score 3 is " << s3 << endl;

	cin >> s4;
	getScore(s4);
	cout << "Score 4 is " << s4 << endl;

	cin >> s5;
	getScore(s5);
	cout << "Score 5 is " << s5 << endl;

	calcAverage(s1, s2, s3, s4, s5);

}

void getScore(double &arg1)
{
	while(arg1 < 0 || arg1 > 100)
	{
		cout << "Please enter a valid score." << endl;
		cin >> arg1;
	}
}

void calcAverage(double arg1, double arg2, double arg3, double arg4, double arg5)
{
	double lowest, average, sum;

	lowest =findLowest(arg1, arg2, arg3, arg4, arg5);

	sum = (arg1+arg2+arg3+arg4+arg5-lowest);

	cout << "The sum of the four highest scores is " << sum << endl;

	average = sum/4;

	cout << "The average is " << average << endl;
}

double findLowest(double arg1, double arg2, double arg3, double arg4, double arg5)
{
	double lowest;

	lowest = arg1;

	if(arg2 < lowest)
		lowest = arg2;
	if(arg3 < lowest)
		lowest = arg3;
	if(arg4 < lowest)
		lowest = arg4;
	if(arg5 < lowest)
		lowest = arg5;

	cout << "The lowest score is " << lowest << endl;

	return lowest;
}
