#include <iostream>

using namespace std;

double add(double x, double y) {
	return x + y;
}

double add(double x, double y, double z) {
	return x + y + z;
}

int main() {

	auto a = add(3, 4);
	cout << "3 + 4 = " << a << endl;
	double b = add(1.2, 4.2);
	cout << "1.2 + 4.2 = " << b << endl;
	double c = add(1.2, 4.2, 5.4);
	cout << "1.2 + 4.2 + 5.4 = " << c << endl;
	return 0;
}



