#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	int P, S;
	P = 2 * a + 2 * b;
	S = a * b;
	cout << "P=" << P << endl << "S=" << S << endl;
	return 0;
}