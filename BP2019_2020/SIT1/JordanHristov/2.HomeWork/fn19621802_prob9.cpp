#include <iostream>
using namespace std;

float chislo(char ch);
struct triangle {
	float a, b, c;
	float p=a+b+c;
};

int main() {
	
	triangle first = {
	
		chislo('a'),
		chislo('b'),
		chislo('c')
	};
	cout << "Obikolkata e: "<<first.p<< endl;

	triangle second = {

		chislo('a'),
		chislo('b'),
		chislo('c')
	};
	cout << "Obikolkata e: " << second.p << endl;

	return 0;
}
float chislo(char ch) {
	float f;
	cout << ch << "=";
	cin >> f;
	return f;
}



