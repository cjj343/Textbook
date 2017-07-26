//This program tracks students bowling score
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
	int numStudents, student;
	double average, prevAverage, score1, score2, score3, improvement;
	string stuName, insName;

	ofstream report;
	report.open("c:\\users\\cameron\\desktop\\report.txt");

	cout << "How many total students were at class?" << endl;
	cin >> numStudents;

	report << "Student Score Card\n\n";
	report << setw(20) << left << "Student" << setw(20) << left << "Instructor" << setw(10) << left << "Game 1" << setw(10) << left << "Game 2" << setw(10) << left << "Game 3" << setw(20) << left << "Previous Average" << setw(20) << left << "Current Average" << setw(15) << left << "Improvment" << endl;
	report << "--------------------------------------------------------------------------------------------------------------------" << endl;


	for(student = 1; student <= numStudents; student++)
	{
		average = 0;
		improvement = 0;

		cin.ignore();

		cout << "What is the student #" << student << "'s name?" << endl;
		getline(cin, stuName);
		
		cout << "To which instructor was this student assigned?" << endl;
		getline(cin, insName);

		cout << "What was the students previous average?" << endl;
		cin >> prevAverage;

		while(prevAverage < 0 || prevAverage > 300)
		{
			cout << "Please enter a valid average." << endl;
			cin >> prevAverage;
		}

		cout << "What was the student's score for game 1?" << endl;
		cin >> score1;

		while(score1 < 0 || score1 > 300)
		{
			cout << "Please enter a valid score." << endl;
			cin >> score1;
		}
			

		cout << "What was the student's score for game 2?" << endl;
		cin >> score2;

		while(score2 < 0 || score2 > 300)
		{
			cout << "Please enter a valid score." << endl;
			cin >> score2;
		}

		cout << "What was the student's score for game 3?" << endl;
		cin >> score3;

		while(score3 < 0 || score3 > 300)
		{
			cout << "Please enter a valid score." << endl;
			cin >> score3;
		}

		average = (score1 + score2 + score3)/3;

		if(average > prevAverage)
			improvement = average - prevAverage;
		else
			improvement = 0;
		

		report << setw(20) << left << stuName << setw(20) << left << insName << setw(10) << left << score1 << setw(10) << left << score2 << setw(10) << left << score3 << setw(20) << left << prevAverage << setw(20) << left << average << setw(15) << left << improvement << endl;
	}

	cout << "This program has succesfully exported the data to report.txt" << endl;

	return 0;
}

