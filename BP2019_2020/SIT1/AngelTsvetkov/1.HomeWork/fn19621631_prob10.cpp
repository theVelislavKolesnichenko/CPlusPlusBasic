#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	float P = 2 * a + 2 * b;
	float S = a*b;
	cout << "Периметър = " << P << endl;
	cout << "Лице = " << S << endl;
	return 0;
}