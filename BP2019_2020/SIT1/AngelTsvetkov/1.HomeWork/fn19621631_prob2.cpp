#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "vuvedete a:";
	cin >> a;
	cout << "vuvedete b: ";
	cin >> b;
	cout << "vuvedete c: ";
	cin >> c;
	int d = (a + b + c) / 3;
	cout << "srednata stoinost na a, b i c e: " << d << endl;
	return 0;
}