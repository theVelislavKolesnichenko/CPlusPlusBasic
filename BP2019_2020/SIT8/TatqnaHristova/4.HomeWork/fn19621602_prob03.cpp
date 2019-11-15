#include<iostream>
using namespace std;

long nod(long a, long b);
long nok(long a, long b);

int main()
{ 
	long a, b;
	cout << "num1= ";
	cin >> a;
	cout << "num2= ";
	cin >> b;
	cout << "NOD= " << nod(a, b) << endl;
	cout << "NOK= " << nok(a, b) << endl;

	return 0;
}
long nod(long a, long b) {
	while (b != 0) {
		long c = b;
		b = a % b;
		a = c;
	}
	return a;
}
long nok(long a, long b) {
	return a * b / nod(a, b);
}