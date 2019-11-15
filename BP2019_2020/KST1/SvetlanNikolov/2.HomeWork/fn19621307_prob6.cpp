#include <iostream> 
#include <conio.h>
using namespace std;
double yes(double a, double b);
int main() {

	double a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "Rezultatut e: " << yes(a, b) << endl;
;	return 0;
}
double yes(double a, double b) {
	return (a + b) * (a * a - a * b + b * b) + (a * a + 2 * b * a - 2 * a * b + b * b);
}