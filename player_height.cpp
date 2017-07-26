//This program displays height in feet/inches form
#include <iostream>
using namespace std;

int main ()
{
	int height = 74,
	feet,
	inches;

	feet = height/12;
	inches = height%12;

	if (inches==1)
	{
	cout << "The star basketball player is " << feet << " feet and " << inches << " inch tall.\n";
	}

	else
	{
	cout << "The star basketball player is " << feet << " feet and " << inches << " inches tall.\n";
	}

	return 0;

	
}
	


	
