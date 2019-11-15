#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

float realNum(char ch);
float mathMidd(float a, float b, float c, float d);


int main()
{
	SetConsoleOutputCP(1251);
	float a, b, c, d, e;
	a = realNum('a');
	b = realNum('b');
	c = realNum('c');
	d = realNum('d');
	cout << "Средната стойност на четирите числа е " << mathMidd(a, b,c,d) << endl;
	
	return 0;
}
float realNum(char ch) {
	float p;
	cout << ch << "=";
	cin >> p;
	return p;
}
float mathMidd(float a, float b, float c, float d) {
	return (a + b+c+d)/4;
}
