#include <iostream>
using namespace std;
double double_in(char ch);
int average(int a, int b, int c, int d);
int main()
{
	int a, b, c, d;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "d=";
	cin >> d;
	cout << "(a+b+c+d)/4 = " << average(a,b,c,d) << endl;
	system("pause");
	return 0;
}
double double_in(char ch) {
	double x;
	cout << ch << "=";
	cin >> x;
	return x;
}
int average(int a, int b, int c, int d) {
	return (a, b, c, d) / 4;
}