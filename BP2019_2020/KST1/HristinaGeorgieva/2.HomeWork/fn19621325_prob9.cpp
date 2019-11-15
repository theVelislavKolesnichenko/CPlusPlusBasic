#include <iostream>
using namespace std;
struct triangle {
	double a, b, c;
};
triangle triangle_in();
double perimeter(triangle x);
int main()
{
	triangle x;
	double a, b, c, x1, x2, x3;
	cout << "a=";
	cin >> x.a;
	cout << "b=";
	cin >> x.b;
	cout << "c=";
	cin >> x.c;
	cout << "P="<<perimeter(x) << endl;
	system("pause");
	return 0;
}
double perimeter(triangle x) {
	double x1 = x.a;
	double x2 = x.b;
	double x3 = x.c;
	return x1 + x2 + x3;
}