#include <iostream>
using namespace std;

float chislo(char ch);
struct square {
	float a, b;
	float s = a*b;
};

int main() {

	square first = {

		chislo('a'),
		chislo('b')
	
	};
	cout << "Liceto e: " << first.s << endl;

	square second = {

		chislo('a'),
		chislo('b')
	};
	cout << "Liceto e: " << second.s << endl;

	return 0;
}
float chislo(char ch) {
	float f;
	cout << ch << "=";
	cin >> f;
	return f;
}