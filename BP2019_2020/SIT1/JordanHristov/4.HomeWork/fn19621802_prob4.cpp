#include <iostream>
#include <math.h>
using namespace std;

void x(float a, float b,float c);
int main() {
	float a(0),b(0),c(0);
	x(a, b, c);
	return 0;
}
void x(float a, float b, float c) {
	float x1, x2;
	float d; //discriminanta
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	d = pow(b,2) - 4 * a * c;
	x1 = (-b + sqrt(d))/(2 * a);
	x2 = (-b - sqrt(d))/(2 * a);
	cout << "Za ax2+bx+c=0, korenite na uravnenieto sa:"<<endl;
	cout << "x1=" << x1 << endl;
	cout << "x2=" << x2 << endl;

}