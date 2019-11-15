#include <iostream>
using namespace std;
struct rectangular {
	double a, b;
};
double S(rectangular A);
int main() {
	rectangular A;
	cout << "a=";
	cin >> A.a;
	cout << "b=";
	cin >> A.b;
	cout << "S=" << S(A) << endl;
	return 0;
}
double S(rectangular A) {
	return A.a * A.b;
}