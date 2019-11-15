#include <iostream>
using namespace std;

int x(char ch)
{
	int e;
	cout << ch << "=";
	cin >> e;
	return e;
}

float average(float n)
{
	float t;
	n = x('a') + x('b') + x('c') + x('d');
	t = n / 4;
	cout << "Sredna stoynost = " << t;
	return t;
}

int main()
{
	int a, b, c, d;
	float t;
	cout << "Vavedi chetiri tseli chisla" << endl;
	(float)a;
	(float)b;
	(float)c;
	(float)d;
	t = average('n');
	return 0;
}
