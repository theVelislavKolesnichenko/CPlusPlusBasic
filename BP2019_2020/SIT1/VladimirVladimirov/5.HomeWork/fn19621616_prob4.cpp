#include <iostream>
#include <math.h>
using namespace std;
float var(float x);

int main() {
	float x;
	cout << "Въведете число от -100 до 100" << endl;
	cin >> x;
	if (x >= -100 && x <= 100) {
		if (x <= 0) {
			cout << "Стойноста на уравнението y(x) = x3/4+1: " << var(x) << endl;
		}
		else if (x > 0) {
			cout << "Стойноста на уравнението y(x) = √((x-4)) : " << var(x) << endl;
		}
	}
	else {
		cout << "Не сте въвели число в интервала от -100 до 100" << endl;
	}



	return 0;
}

float var(float x)
{
	if (x <= 0) {
		x = pow(x, 3)/(4+1);
	}
	else if (x > 0) {
		x = sqrt(x-4);
	}
	return x;
}