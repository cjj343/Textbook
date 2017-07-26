#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;


int main()
{
	string teams[100];
	string winners[100];
	int countTeams = 0;
	int countWinners = 0;
	string user;
	int match = 0;

	ifstream inputFile;

	inputFile.open("Teams.txt");

	if(!inputFile)
	{
		cout << "File open error!" << endl;
	}

	while(countTeams < 100 && getline(inputFile, teams[countTeams]))
	{
		countTeams++;
	}

	inputFile.close();

	inputFile.open("WorldSeriesWinners.txt");

	if(!inputFile)
	{
		cout << "File open error!" << endl;
	}

	while(countWinners < 100 && getline(inputFile, winners[countWinners]))
	{
		countWinners++;
	}

	inputFile.close();

	for(int i = 0; i < countTeams; i++)
	{
		cout << teams[i] << endl;
	}
/*
	for(int x = 0; x < countTeams; x++)
	{
		for(int a = 0; a < teams[x].length(); a++)
		{
			toupper(teams[x].at(a));
		}
	}

	for(int y = 0; y < countWinners; y++)
	{
		for(int b = 0; b < winners[y].length(); b++)
		{
			toupper(winners[y].at(b));
		}
	}
*/
	cout << "Choose a team, and I will tell you how many times they won The World Series." << endl;
	getline(cin, user);
/*
	for(int z = 0; z < user.length(); z++)
	{
		user = toupper(user.at(z));
	}
*/

	for(int c = 0; c < countWinners; c++)
	{
		double same = 0;
		double result = 0;
		
		if(user.length() <= winners[c].length())
		{
		for(int d = 0; d < user.length(); d++)
		{
			if(toupper(user.at(d)) == toupper(winners[c].at(d)))
			{
				same++;
			}
			

		}
		}

		if(user.length() > winners[c].length())
		{
		for(int d = 0; d < winners[c].length(); d++)
		{
			if(toupper(user.at(d)) == toupper(winners[c].at(d)))
			{
				same++;
			}
			

		}
		}

		result = same/(winners[c].length());
		
		if(result > .90)
		{
			match++;
		}
		

	}
	
	cout << "The " << user << " have won The Wolrd Series " << match << " time(s)." << endl;
	



	return 0;

}





