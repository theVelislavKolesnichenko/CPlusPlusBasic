#include <iostream>
using namespace std;

float calc1(float y);
float calc2(float y);

int main()
{
	float y;
	cout << "Homework - 3 | Exercise - 6\n\n"
		<< "y=";
	cin >> y;

	if ((y >= 58 && y <= 87))
	{
		cout << "x1= " << calc1(y) << endl;
	}
	
	if (y > 15 && y < 58)
	{
		cout << "x2= " << calc2(y) << endl;
	}

	return 0;
}

float calc1(float y)
{
	return pow(y, 3) + (pow(y, 4) + 2 * y);
}

float calc2(float y)
{
	return 2 * ((2 * y + 5) / (14 - y / 3));
}

//Съставете програма с функции за решаване на уравненията :
//
//	x = y³ + (y^4 + 2y) ако y e в интервала [58; 87]
//	x = 2(2y + 5)/(14 – y/3) ако y е в интервала (15; 58)