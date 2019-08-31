#include <iostream>
using namespace std;

int main() {
	int answer = 7;
	int input = 0;

	while (input != answer) {
		// capture user input
		cout << "Enter your guess" << endl;
		cin >> input;

		// check if guess is too high, too low, or correct
		if (input > answer) {
			cout << "You guessed too high!" << endl;
		}
		else if (input < answer) {
			cout << "You guessed too low!" << endl;
		}
		else {
			cout << "You guessed right!" << endl;
		}
	}
}