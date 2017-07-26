#include <iostream>
#include <string>


using namespace std;



struct Student
{
	string name;
	double grade;
};

void sortGrades(Student *, int);
double average(Student *, int);
void validate(double &);

int main()
{	
	Student *grades = nullptr;
	int numScores;
	double avg, temp;
	string tempName;
	 

	cout << "How many scores need to be entered?" << endl;
	cin >> numScores;

	cin.ignore();

	if(numScores > 0)
	{

		grades = new Student [numScores];

		for(int i = 0; i < numScores; i++)
		{
			cout << "Enter the name of student # " << i+1 << ": ";
			getline(cin, tempName);
			(grades+i)->name = tempName;
			cout << "Enter the grade of student # " << i+1 << ": ";
			cin >> temp;
			validate(temp);
			(grades + i)->grade = temp;
			cin.ignore();
		}

		sortGrades(grades, numScores);
		avg = average(grades, numScores);

		cout << "The scores in ascending order are:" << endl;

		for(int i = 0; i < numScores; i++)
		{
			cout << (grades+i)->name << ": ";
			cout << (grades+i)->grade << endl;
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

void sortGrades(Student *grades, int numScores)
{
	bool test;
	double temp;
	string tempName;

	do
	{
		test = false;
		
		for(int i = 0; i < (numScores - 1); i++)
		{
			if( (grades + i)->grade > (grades+i+1)->grade )
			{
				temp = (grades + i)->grade;
				tempName = (grades + i)->name;
				(grades + i)->grade = (grades + i + 1)->grade;
				(grades + i)->name = (grades + i + 1)->name;
				(grades + i + 1)->grade = temp;
				(grades + i + 1)->name = tempName;
				test = true;
			}
		}
	}while(test);
}

double average(Student *grades, int numScores)
{
	double total = 0;

	for(int i = 0; i < numScores; i++)
	{
		total += (grades+i)->grade;
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





