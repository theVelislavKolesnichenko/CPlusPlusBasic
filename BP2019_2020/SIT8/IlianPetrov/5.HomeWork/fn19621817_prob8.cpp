#include <iostream>
using namespace std;
void func(double (* p));

int main() {
	double a;
	cout << a;
	func(&a);
	cout << a;
	return 0;
}
void func(double  (*p))
{	
	double a;
	cin >> a;
	(*p) = a;
}