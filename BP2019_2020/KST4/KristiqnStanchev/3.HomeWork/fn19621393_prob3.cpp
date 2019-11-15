#include <iostream>

using namespace std;

int inputInt(char);
double Average(int, int, int, int);

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	a = inputInt('a');
	b = inputInt('b');
	c = inputInt('c');
	d = inputInt('d');

	cout<<("Average: %f\n", Average(a, b, c, d));
	return 0;
}

int inputInt(char ch) {

	int x;
    cout<<("ch %c: ", ch);
	cin >> x;
	return x;
}

double Average(int a, int b, int c, int d) {
	return double(a + b + c + d) / 4;
}
