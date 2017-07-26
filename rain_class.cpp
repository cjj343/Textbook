#include <iostream>

using namespace std;

class Stats
{
	private: double data[30];
		 double average, total, highest, lowest;
		 int vals;
	
	public: Stats()
		{ average = 0; total = 0; highest = 0; lowest = 0; vals = 0; }

		bool fillData(int, double);
		void calcTotal();
		void calcAverage();
		void findExtremes();
		double getTotal();
		double getAverage();
		double getLowest();
		double getHighest();

};

bool Stats::fillData(int c, double r)
{

	if((c <= 29) && (r >= 0))
	{
		data[c] = r;
		vals ++;
		return true;

	}

	else if(c > 29)
	{
		return false;
	}

}

void Stats::calcTotal()
{
	for(int i = 0; i < vals; i++)
	{
		total += data[i];
	}
}

void Stats::calcAverage()
{
	average = total/vals;
}

void Stats::findExtremes()
{
	highest = data[0];
	lowest =  data[0];

	for(int i = 1; i < vals; i++)
	{
		if(data[i] < lowest)
		{
			lowest = data[i];
		}

		if(data[i] > highest)
		{
			highest = data[i];
		}
	}
}

double Stats::getTotal()
{
	return total;
}

double Stats::getAverage()
{
	return average;
}

double Stats::getLowest()
{
	return lowest;
}

double Stats::getHighest()
{
	return highest;
}

int main()
{
	Stats info;
	double rain = 0;
	bool test = true;
	double total, average, high, low;
	int count = 0;

	while(test && rain >= 0)
	{
		cout << "Enter rain amount: ";
		cin >> rain;
		test = info.fillData(count, rain);
		count++;
		if(!test)
		{
			cout << "Array is at max capacity. Last value not stored." << endl;
		}
	}

	info.calcTotal();
	info.calcAverage();
	info.findExtremes();
	total = info.getTotal();
	average = info.getAverage();
	high = info.getHighest();
	low = info.getLowest();

	cout << "Total: " << total << endl;
	cout << "Average: " << average << endl;
	cout << "Lowest: " << low << endl;
	cout << "Highest: " << high << endl;

return 0;
}
