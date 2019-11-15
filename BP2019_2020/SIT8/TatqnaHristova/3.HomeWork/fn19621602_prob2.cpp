#include<iostream>
using namespace std;

double bigNum(double a, double b);

int main()
{
	double a, b;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << bigNum(a, b) << endl;

	return 0;
}
double bigNum(double a, double b) {
	if (a >= b) {
		return a;
	}
	else{
		return b;
	}
	return 0;
}