#include <iostream>
using namespace std;

int Units(int a);
int Tens(int a);
int Hundrets(int a);

int main()
{
	int a = 837;
	cout << a << endl;
	cout << "units=" << Units(a) << endl;
	cout << "tens=" << Tens(a) << endl;
	cout << "hundrets=" << Hundrets(a) << endl;
	return 0;
}
int Units(int a) { return a % 10; };
int Tens(int a) { return a / 10 % 10; };
int Hundrets(int a) { return a / 100; };