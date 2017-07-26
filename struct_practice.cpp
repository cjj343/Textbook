//This program is to fuck around with syntax shiz
#include <iostream>
#include <string>

using namespace std;

struct Movies
{
	string title, director;
	int year;
	
	
	Movies()
	{
		title = "unknown";
		director = "unknown";
		year = 0;
	}
};

int main()
{
	Movies movieInfo;

	cout << "What is the title of your favorite movie?" << endl;
	getline(cin, movieInfo.title);
	
	cout << "Who directed this movie?" << endl;
	getline(cin, movieInfo.director);

	cout << "What year was the movie released?" << endl;
	cin >> movieInfo.year;

	cout << movieInfo.title << " " << movieInfo.director << " " << movieInfo.year << endl;

	return 0;
}






