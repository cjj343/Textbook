//This program calculates distance travelled
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
	double speed, time, distance, remain, distanceRemain, timeRemain;

	cout << "Please enter the speeed of the vehicle in MPH" << endl;
	cin >> speed;

	cout << "Please enter the time in hours" << endl;
	cin >> time;
	cout << endl;

	cout << setw(15) << left << "Hour" << setw(15) << left << "Distance" << endl;
	cout << "------------------------------------------------";
	cout << endl;

	for(double count = 1; count <= time; count++)
	{
		distance = count*speed;
		cout << setw(15) << left << count << setw(15) << left << distance << endl;

		if((time - count)<1)
		{
			remain = time - count;
			distanceRemain = (remain*speed)+distance;
			timeRemain = count + remain;
			cout << setw(15) << left << timeRemain << setw(15) << left << distanceRemain << endl;
		}
	}

	return 0;
}

