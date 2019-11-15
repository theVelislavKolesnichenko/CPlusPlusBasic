#include <iostream>
#include <math.h>

using namespace std;
int main() {
	double c, hc, S;
	cout << "C=";
	cin >> c;
	cout << "hc=";
	cin >> hc;

	S = double(c * hc) / 2;

	cout << "S= " << S << endl;
	return 0;
}