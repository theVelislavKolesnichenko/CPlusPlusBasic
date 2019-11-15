#include <iostream>
using namespace std;

void main()
{
	int a, b, c;
	float d;
	cout << " - Homework N1, Ex 2 - \n\n"
		<< "Entering values:\n"
		<< "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	cout << "C=";
	cin >> c;
	d = (float)(a + b + c) / 3;
	cout << "\n\nResults:\n" << "Average value:" << d<<endl;
	system("pause");
}

//Съставете програма която въвежда 3 цели числа от конзолата и извежда средната им стойност.