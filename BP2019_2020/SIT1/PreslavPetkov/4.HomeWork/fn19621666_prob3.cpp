#include <iostream>
using namespace std;
double NOD(double a, double b);
void NOK(double a, double b);
int main() {
	double a, b;
	while (true) {
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout<<"NOD="<<NOD(a, b)<<endl;
		NOK(a, b);
	}
	return 0;
}
double NOD(double a, double b) {
	while (a != b) {
		if (a > b)a = a - b;
		else b = b - a;
	}
	return a;
}
void NOK(double a, double b) {
	cout<<"NOK="<< a * (b / NOD(a,b))<<endl;
}