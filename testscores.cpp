#include <iostream>

using namespace std;

void sortGrades(double *, int);
double average(double *, int);
void validate(double &);

int main()
{	
	double *grades = nullptr;
	int numScores;
	double avg, temp;

	cout << "How many scores need to be entered?" << endl;
	cin >> numScores;

	if(numScores > 0)
	{

		grades = new double [numScores];

		cout << "Enter the scores." << endl;

		for(int i = 0; i < numScores; i++)
		{
			cin >> temp;
			validate(temp);
			*(grades + i) = temp;
		}

		sortGrades(grades, numScores);
		avg = average(grades, numScores);

		cout << "The scores in ascending order are:" << endl;

		for(int i = 0; i < numScores; i++)
		{
			cout << *(grades+i) << endl;
		}

		cout << "Average: " << avg;

		delete [] grades;
		grades = nullptr;
	}

	else
	{
		cout << "No scores to enter. Exiting..." << endl;
	}


	return 0;
}

void sortGrades(double *grades, int numScores)
{
	bool test;
	double temp;

	do
	{
		test = false;
		
		for(int i = 0; i < (numScores - 1); i++)
		{
			if( *(grades + i) > *(grades+i+1) )
			{
				temp = *(grades + i);
				*(grades + i) = *(grades + i + 1);
				*(grades + i + 1) = temp;
				test = true;
			}
		}
	}while(test);
}

double average(double *grades, int numScores)
{
	double total = 0;

	for(int i = 0; i < numScores; i++)
	{
		total += *(grades+i);
	}

	return total/numScores;
}

void validate(double &temp)
{
	while(temp < 0)
	{
		cout << "Please enter a valid score!" << endl;
		cin >> temp;
	}
}





