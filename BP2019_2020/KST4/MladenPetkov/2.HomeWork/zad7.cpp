#include <iostream>
using namespace std;

double double_in(char ch);
int RAV(int y);

int main()
{

	int y;
	cout << "y=";
	cin >> y;
	cout << "x=" << RAV(y);
	return 0;
}

int RAV(int y)
{
	int x = 2 * (2 * y + 5) / (14 - y / 3);
	return x;
}

double double_in(char ch)
{
	double f;
	cout << ch << "=";
	cin >> f;
	return 0;
}