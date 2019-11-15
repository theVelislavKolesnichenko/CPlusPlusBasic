#include <iostream>
using namespace std;
double max(int a, int b);
int main()
{
	double a, b;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << max(a, b);
	return 0;
}
double max(int a, int b)
{
	if (a > b)
		return a;
	else return b;
}