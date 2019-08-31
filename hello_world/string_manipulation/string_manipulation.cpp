#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string input1;
	string input2;

	cout << "Write the first word" << endl;
	cin >> input1;

	cout << "Write the second word" << endl;
	cin >> input2;

	if (input1.length() > input2.length())
	{
		cout << "First word was longer." << endl;
	}
	else if (input2.length() > input1.length())
	{
		cout << "Second word was longer." << endl;
	}
	else
	{
		cout << "Both words have the same length." << endl;
	}
}