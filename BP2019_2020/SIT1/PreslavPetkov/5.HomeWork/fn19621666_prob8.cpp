#include <iostream>
using namespace std;
void real(double& n);
int main() {
	double a = 0;
	cout <<"a="<< a << endl;
	real(a);
	cout <<"a="<< a << endl;
	return 0;
}
void real(double& n) {
	cout << "n=";
	cin >> n;
}