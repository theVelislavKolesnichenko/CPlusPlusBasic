#include <math.h>
#include <iostream>
using namespace std;
double result(double a,double c);
int main() {
	double a, c;
	cout << "a= ";
	cin >> a;
	cout << "c= ";
	cin >> c;
	if (a > -2 || c != 0)
		cout << "result= " << result(a,c);
	else
		cout << "invalid input";
	}
double result(double a, double c) {
	return (sqrt(a + 2) - 2 / c);		
}




