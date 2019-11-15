#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "Въведете четири числа: " << endl;
	cin >> a >> b >> c >> d;
	double sum;
	sum = a + b + c + d;
	double average;
	average = sum / 4;
	cout<<"Средната стойност е: " << average;
	return 0;
}