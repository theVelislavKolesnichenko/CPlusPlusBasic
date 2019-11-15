#include <iostream>
using namespace std;

int main() {
	double a, b, Sab, Pab;
	cout << "Въведете страната a=" << endl;
	cin >> a;
	cout << "Въведете височината b=" << endl;
	cin >> b;
	Sab = a * b;
	Pab = 2 * a + 2 * b;
	cout << "Лице=" << Sab << "\n Обиколка=" << Pab;
return 0;
}