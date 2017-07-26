#include <iostream>

using namespace std;

int main()
{
	const int MAX = 20;
	int count = 0;
	int result;
	double scores[MAX];
	char user = 'y';

	void validate(double &);
	int perfect(const double[], int);



	while(count < MAX && (user == 'y' || user == 'Y'))
	{
		cout << "Please enter test score # " << count+1 << endl;
		cin >> scores[count];
		validate(scores[count]);

		cout << "Would you like to enter another score?" << endl;
		cin >> user;

	
		count ++;
	}

	result = perfect(scores, count);

	if(result > 1)
		cout << "There were " << result << " perfect scores!" << endl;

	else if(result == 1)
		cout << "There was 1 perfect score!" << endl;
	else
		cout << "There were no perfect scores." << endl;

return 0;
}

void validate(double &score)
{
	while(score < 0 || score > 100)
	{
		cout << "Please eneter a valid score" << endl;
		cin >> score;
	}
}

int perfect(const double scores[], int count)
{
	int perfect = 0;

	for(int i = 0; i < count; i++)
	{
		if(scores[i] == 100)
		{
			perfect++;
		}
	}

	return perfect;
}
