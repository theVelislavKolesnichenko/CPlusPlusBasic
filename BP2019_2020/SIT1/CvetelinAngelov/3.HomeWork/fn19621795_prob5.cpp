#include <iostream>
#include <cmath>
using namespace std;

float calc1(float y);
float calc2(float y);

int main()
{
	float y;
	cout << "Homework - 3 | Exercise - 5\n\n"
		<<"y=";
	cin >> y;

	if (y > 1)
	{
		cout << "x=" << calc1(y) << endl;
	}
	else if (y < 1)
	{
		cout << "x=" << calc2(y) << endl;
	}

	return 0;
}

float calc1(float y)
{
	return 2 * (2 * y + 5) / (14 - y / 3);
}

float calc2(float y)
{
	//x = y³ + (y^4 + 2y)
	return pow(y, 3) + (pow(y, 4) + 2 * y);
}

//Съставете програма с функции за решаване на уравненията :
//	x = y³ + (y^4 + 2y) ако y e < 1
//	x = 2(2y + 5) / (14 – y / 3) ако y > 1