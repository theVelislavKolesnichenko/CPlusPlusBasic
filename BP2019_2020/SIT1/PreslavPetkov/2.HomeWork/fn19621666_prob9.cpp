#include <iostream>
using namespace std;
struct triangular {
	double a, b, c;
};
double P(triangular A);
int main() {
	triangular A;
	cout << "a=";
	cin >> A.a;
	cout << "b=";
	cin >> A.b;
	cout << "c=";
	cin >> A.c;
	cout << "P=" << P(A) << endl;
	return 0;
}
double P(triangular A) {
	return A.a + A.b + A.c;
}
