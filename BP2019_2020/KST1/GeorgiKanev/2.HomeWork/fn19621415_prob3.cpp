#include <iostream>
using namespace std;

float avarage(int a, int b, int c, int d);
float choice(char ch);

int main() {
	int a, b, c, d;
	a = choice('a');
	b = choice('b');
	c = choice('c');
	d = choice('d');

	cout << "Avarage sum = " << avarage(a, b, c, d) <<endl;
	return 0;
}

float avarage(int a, int b, int c, int d) {
	//In the exercise, a,b,c,d must be of type int in the main class, so we need to type cast them to float
	//in the avarage function, in order for the result to be the actual float value.
	//If we leave them as int, then a division of 5/4 will return 1, instead of 1.25.
	float X = float(a + b + c + d) / 4;
	return X;
}

float choice(char ch) {
	float entry;
	cout << ch << " = ";
	cin >> entry;
	return entry;
}