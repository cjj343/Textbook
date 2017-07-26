#include <iostream>

using namespace std;

class Practice
{
	private: int size;
		 int *ptr;

	public: Practice()
		{ size = 0; ptr = 0; }

		Practice(int s, int *p);

		int *createMem();

		~Practice();
};

Practice::Practice(int s, int *p = 0)
{
	cout << "Initializing variables..." << endl;
	size = s;
	ptr = p;

}

int *Practice::createMem()
{
	cout << "Creating memory..." << endl;

	ptr = new int [size];

	return ptr;
}

Practice::~Practice()
{
	cout << "Freeing memory..." << endl;

	delete [] ptr;
	ptr = 0;
}

int main()
{
	int *ptr = 0;
	
	Practice newMem(3);

	ptr = newMem.createMem();

	for(int i = 0; i < 3; i++)
	{
		ptr[i] = i+1;
	}

	for(int i = 0; i < 3; i++)
	{
		cout <<	ptr[i] << endl;;
	}

	ptr = 0;
	

return 0;
}
