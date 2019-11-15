#include <iostream>

using namespace std;

float choice(char a) {
	float entry;
	cout << "Vuvedi chislo ";
	cin >> entry;
	return entry;
}

void average(int b, int c, int d, int e)
{
	int sum;
	sum = (b + c + d + e);
	cout << sum / 4;
}

int main()
{
	int x, y, z, f;
	x = choice('x');
	y = choice('y');
	z = choice('z');
	f = choice('f');
	cout << "Srednoto aritmetichno na 4-rite chisla e: ";
	average(x, y, z, f);
	return 0;
}