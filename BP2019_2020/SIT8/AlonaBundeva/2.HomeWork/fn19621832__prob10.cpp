#include< iostream>
using namespace std;
int blab(int a, int b);
int main()
{
	int a, b, P;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	P = blab(a, b);
	return 0;
}
int blab(int a, int b)
{
	int P;
	P = (2 * a + 2 * b);
	cout << "P=(2*a +2*b)=" << P << endl;
	return P;
}