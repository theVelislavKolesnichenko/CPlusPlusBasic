#include <iostream>
#include <math.h>
using namespace std;
double double_in(char ch);
int equation(int a, int b);
int main()
{
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	cout <<"x="<< equation(a,b) << endl;
	system("pause");
	return 0; 
}
double double_in(char ch) {
	double f;
	cout << ch << "=";
	cin >> f;
	return f;
}
int equation(int a, int b) {
	int x = pow((a + b), 3) + (pow(a, 2) + 2 * b * a - 2 * a * b + pow(b, 2));
	return x;
}