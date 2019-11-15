#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "P i S na pravougulnik:\n";
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	int P = 2 * a + 2 * b;
	int S = a * b;
	cout << "P=" << P << endl;
	cout << "S=" << S << endl;
  return 0;
}