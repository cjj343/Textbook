#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> findMode(int *, int);

int main()
{
	int numPeople;
	vector<int>mode;

	cout << "How many people were surveyed?" << endl;
	cin >> numPeople;

	int *ptr = new int[numPeople];

	cout << "Enter the number of slices of pie each person ate this year." << endl;

	for(int i = 0; i < numPeople; i++)
	{
		cin >> ptr[i];
	}

	mode = findMode(ptr, numPeople);

	if(mode.size() < 1)
	{
		cout << "There is no mode for this data set. All values occured once." << endl;
	}

	else if(mode.size() > 1)
	{
		cout << "The data set had the following modes: ";

		for(int i = 0; i < mode.size(); i++)
		{
			cout << mode[i] << " ";
		}

		cout << endl;
	}

	else if(mode.size() == 1)
	{
		cout << "Mode: " << mode[0] << endl;
	}

return 0;
}


vector<int> findMode(int *ptr, int numPeople)
{
	int count;
	int mode;
	int highest = 1;
	vector<int>modes;

	for(int i = 0; i < numPeople; i++)
	{
		count = 1;

		for(int x = i + 1; x < numPeople; x++)
		{
			if(ptr[i] == ptr[x])
			{
				count++;
			}
		}

		if(count > highest)
		{
			mode = ptr[i];
			highest = count;
		}
		
	}

	if(highest == 1)
	{
		return modes;
	}

	else
	{

	modes.push_back(mode);

	for(int i = 0; i < numPeople; i++)
	{
		count = 1;

		for(int x = i +1; x < numPeople; x++)
		{
			if(ptr[i] == ptr[x])
			{
				count++;
			}
		}

		if(count == highest && ptr[i] != modes[0])
		{
			mode = ptr[i];
			modes.push_back(mode);
		}
		
	}
	}


	return modes;


}

