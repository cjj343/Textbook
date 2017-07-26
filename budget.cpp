#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>

using namespace std;


struct monthlyBudget
{
	double housing, utilities, household, trans, food, med, insurance, enter, cloth, misc;
};

struct userInfo
{
	double housing, utilities, household, trans, food, med, insurance, enter, cloth, misc;
};

void placeCursor(HANDLE, int, int);
void displayBudgetTemplate(HANDLE);
void displayBudget(HANDLE, monthlyBudget);
void inputBudget(HANDLE, userInfo&);
void result(HANDLE, monthlyBudget, userInfo);

int main()
{
	system("CLS");

	monthlyBudget output = {500, 150, 65, 50, 250, 30, 100, 150, 75, 50};
	userInfo input;

	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	placeCursor(screen, 1, 35);
	cout << "Your Budget";

	displayBudgetTemplate(screen);
	displayBudget(screen, output);
	Sleep(5000);

	placeCursor(screen, 1, 27);
	cout << "             ";
	placeCursor(screen, 1, 32);
	cout << "Now enter your expenses";

	inputBudget(screen, input);
	result(screen, output, input);


	return 0;
}

void placeCursor(HANDLE screen, int row, int col)
{
	COORD position;
	position.Y = row;
	position.X = col;
	SetConsoleCursorPosition(screen, position);
}

void displayBudgetTemplate(HANDLE screen)
{
	placeCursor(screen, 3, 25);
	cout << "******* Monthly Budget *******" << endl;
	placeCursor(screen, 5, 25);
	cout << "Housing:";
	placeCursor(screen, 7, 25);
	cout << "Utilities:";
	placeCursor(screen, 9, 25);
	cout << "Houshold Expenses:";
	placeCursor(screen, 11, 25);
	cout << "Transportation:";
	placeCursor(screen, 13, 25);
	cout << "Food:";
	placeCursor(screen, 15, 25);
	cout << "Medical:";
	placeCursor(screen, 17, 25);
	cout << "Insurance:";
	placeCursor(screen, 19, 25);
	cout << "Entertainment:";
	placeCursor(screen, 21, 25);
	cout << "Clothing:";
	placeCursor(screen, 23, 25);
	cout << "Miscellaneous:";
}

void displayBudget(HANDLE screen, monthlyBudget output)
{
	placeCursor(screen, 3, 25);
	cout << "******* Monthly Budget *******" << endl;
	placeCursor(screen, 5, 34);
	cout << output.housing;
	placeCursor(screen, 7, 37);
	cout << output.utilities;
	placeCursor(screen, 9, 44);
	cout << output.household;
	placeCursor(screen, 11, 41);
	cout << output.trans;
	placeCursor(screen, 13, 31);
	cout << output.food;
	placeCursor(screen, 15, 34);
	cout << output.med;
	placeCursor(screen, 17, 36);
	cout << output.insurance;
	placeCursor(screen, 19, 40);
	cout << output.enter;
	placeCursor(screen, 21, 36);
	cout << output.cloth;
	placeCursor(screen, 23, 40);
	cout << output.misc;
}

void inputBudget(HANDLE screen, userInfo &input)
{
	string spaces;

	spaces.assign(10, ' ');

	placeCursor(screen, 5, 34);
	cout << spaces;
	placeCursor(screen, 7, 37);
	cout << spaces;
	placeCursor(screen, 9, 44);
	cout << spaces;
	placeCursor(screen, 11, 41);
	cout << spaces;
	placeCursor(screen, 13, 31);
	cout << spaces;
	placeCursor(screen, 15, 34);
	cout << spaces;
	placeCursor(screen, 17, 36);
	cout << spaces;
	placeCursor(screen, 19, 40);
	cout << spaces;
	placeCursor(screen, 21, 36);
	cout << spaces;
	placeCursor(screen, 23, 40);
	cout << spaces;


	placeCursor(screen, 5, 34);
	cin >> input.housing;
	placeCursor(screen, 7, 37);
	cin >> input.utilities;
	placeCursor(screen, 9, 44);
	cin >> input.household;
	placeCursor(screen, 11, 41);
	cin >> input.trans;
	placeCursor(screen, 13, 31);
	cin >> input.food;
	placeCursor(screen, 15, 34);
	cin >> input.med;
	placeCursor(screen, 17, 36);
	cin >> input.insurance;
	placeCursor(screen, 19, 40);
	cin >> input.enter;
	placeCursor(screen, 21, 36);
	cin >> input.cloth;
	placeCursor(screen, 23, 40);
	cin >> input.misc;
}

void result(HANDLE screen, monthlyBudget output, userInfo input)
{
	string spaces;

	spaces.assign(10, ' ');

	placeCursor(screen, 5, 34);
	cout << spaces;
	placeCursor(screen, 7, 37);
	cout << spaces;
	placeCursor(screen, 9, 44);
	cout << spaces;
	placeCursor(screen, 11, 41);
	cout << spaces;
	placeCursor(screen, 13, 31);
	cout << spaces;
	placeCursor(screen, 15, 34);
	cout << spaces;
	placeCursor(screen, 17, 36);
	cout << spaces;
	placeCursor(screen, 19, 40);
	cout << spaces;
	placeCursor(screen, 21, 36);
	cout << spaces;
	placeCursor(screen, 23, 40);
	cout << spaces;


	placeCursor(screen, 5, 34);
	cout << output.housing - input.housing;
	placeCursor(screen, 7, 37);
	cout << output.utilities - input.utilities;
	placeCursor(screen, 9, 44);
	cout << output.household - input.household;
	placeCursor(screen, 11, 41);
	cout << output.trans - input.trans;
	placeCursor(screen, 13, 31);
	cout << output.food - input.food;
	placeCursor(screen, 15, 34);
	cout << output.med - input.med;
	placeCursor(screen, 17, 36);
	cout << output.insurance - input.insurance;
	placeCursor(screen, 19, 40);
	cout << output.enter - input.enter;
	placeCursor(screen, 21, 36);
	cout << output.cloth - input.cloth;
	placeCursor(screen, 23, 40);
	cout << output.misc - input.misc;

	placeCursor(screen, 25, 32);
	cout << "Total: " << ((output.housing + output.utilities + output.household + output.trans + output.food + output.med + output.insurance + output.enter + output.cloth + output.misc) - (input.housing + input.utilities + input.household + input.trans + input.food + input.med + input.insurance + input.enter + input.cloth + input.misc));


}
	





