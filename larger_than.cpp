#include <iostream>

using namespace std;

int main()
{
	const int MAX = 5;
	int nums[MAX];
	int comp, result;

	int larger(const int[], int, int);

	cout << "Please enter 5 integers" << endl;

	for(int i = 0; i < MAX; i++)
	{
		cin >> nums[i];
	}

	cout << "Please enter a comparison value" << endl;
	cin >> comp;

	result = larger(nums, MAX, comp);

	cout << "There were " << result << " values larger than the comparison value." << endl;

return 0;
}

int larger(const int array[], int count, int arg1)
{
	int i = 0;

	for(int x = 0; x < count; x ++)
	{
		if(array[x] > arg1)
		{
			i++;
		}
	}

	return i;
}
