//This program deals with the conversion of acres to square feet and square meters
#include <iostream>
using namespace std;

int main ()
{
	float squareFoot, squareMeter;
	squareFoot = 43560*.25;
	squareMeter = squareFoot/10.7639;

	cout << "A quarter acre is " << squareFoot << " square feet or " << squareMeter << " square meters.\n";

	return 0;
}
	


	
