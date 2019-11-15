#include <iostream>
using namespace std;
struct rectangle {
	double a, b;
};
rectangle rectangle_in();
double S(rectangle x);
int main(){
	rectangle x;
	double a, b, x1, x2;
	cout << "a=";
	cin >> x.a;
	cout << "b=";
	cin >> x.b;
	cout << "S=" << S(x) << endl;
	system("pause");
	return 0;
}
double S(rectangle x) {
	double x1 = x.a;
	double x2 = x.b;
	return x1 * x2;
}
