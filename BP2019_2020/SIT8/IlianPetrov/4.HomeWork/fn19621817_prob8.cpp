#include <iostream>
using namespace std;
int Count(int a);

int main() {
	int a;
	cout << "a= ";
	cin >> a;
	cout << Count(a) << endl;
	return 0;
}
int Count(int a)
{
	int b = 0;
	while (a / 4 > 0)
	{
		b++;
		a = a / 10;
	}
	if (a > 4) {
		cout << "more four-digit: ";

	}
	else if (a < 4) {
		cout << "less four-digit: ";
	}
	else {
		cout << "four-digit: ";
	}
	return b;

}