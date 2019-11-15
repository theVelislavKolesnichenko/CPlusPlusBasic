#include <iostream>
using namespace std;
int main()
{
	float a, b, P, S;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	P = 2 * (a + b);
	S = a * b;
	cout << "P=" << P << endl;
	cout << "S=" << S << endl;
	system("pause");
	return 0;
}