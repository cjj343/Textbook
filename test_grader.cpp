#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

const int MAX = 20;
const int PASS = 15;

class TestGrader
{
	private: char key[MAX];
		 char user[MAX];
		 int correct;
		 string answer, wrong, qnum;
	
	public: TestGrader()
		{ correct = 0; }
		 
		void setKey(string);
		void setUser(string);
		void gradeTest();
		int getCorrect();
		string getQnum();
		string getAnswer();
		string getWrong();
};

void TestGrader::setKey(string str)
{
	for(int i = 0; i < MAX; i++)
	{
		key[i] = str.at(i);
	}
}

void TestGrader::setUser(string str)
{
	for(int i = 0; i < MAX; i++)
	{
		user[i] = str.at(i);
	}
}

void TestGrader::gradeTest()
{
	for(int i = 0; i < MAX; i++)
	{
		if(key[i] == user[i])
		{
			correct++;
		}

		else if(key[i] != user[i])
		{
			qnum += to_string(i+1);
			answer += key[i];
			wrong += user[i];
		}
	}


	cout << qnum;
}

int TestGrader::getCorrect()
{
	return correct;
}

string TestGrader::getQnum()
{
	return qnum;
}

string TestGrader::getAnswer()
{
	return answer;
}

string TestGrader::getWrong()
{
	return wrong;
}


int main()
{
	string key, user, answer, wrong, qnum;
	char tempChar, control;
	TestGrader info;
	int count = 1;
	int correct;
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);


	cout << "Enter the answers for the key." << endl;

	for(int i = 0; i < MAX; i++)
	{
		cout << i+1 << ": ";
		cin >> tempChar;
		key += tempChar;
	}
	
	info.setKey(key);

	do
	{
		cout << "Enter the answers for student # " << count << endl;

		for(int i = 0; i < MAX; i++)
		{
			cout << i+1 << ": ";
			cin >> tempChar;
			user += tempChar;
		}
	
		info.setUser(user);
		info.gradeTest();
		correct = info.getCorrect();
		answer = info.getAnswer();
		wrong = info.getWrong();
		qnum = info.getQnum();

		if(correct >= PASS)
		{
			cout << "This student passed!" << endl;
			cout << "They got " << correct << " answers correct and " << MAX - correct << " answers wrong." << endl;
		}

		else if(correct < PASS)
		{
			cout << "This student did not pass." << endl;
			cout << "They got " << correct << " answers correct and " << MAX - correct << " answers wrong." << endl;
		}

		cout << "Here are the questions the student got wrong with the correct answer in green." << endl;
	
		for(int i = 0; i < qnum.length(); i++)
		{
			cout << qnum.at(i) << ": ";
			SetConsoleTextAttribute(screen, 12);
			cout << wrong.at(i) << "  ";
			SetConsoleTextAttribute(screen, 10);
			cout << answer.at(i);
			SetConsoleTextAttribute(screen, 7);
			cout << endl;
		}

		SetConsoleTextAttribute(screen, 7);


		cout << "Would you like to enter another student's score? (Y or N)" << endl;
		cin >> control;

	}while(control == 'Y' || control == 'y');


return 0;
}
