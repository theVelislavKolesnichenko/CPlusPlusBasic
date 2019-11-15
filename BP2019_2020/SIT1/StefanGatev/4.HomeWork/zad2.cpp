#include <iostream>
using namespace std;
void seasons(int a);
int main()
{
	int a;
	cout << "a= ";
	cin >> a;
	if (a > 12 || a < 1)
		cout << "tova ne e mesec";
	else
		seasons(a);
}
void seasons(int a) {
	if (a > 2 && a < 6)
		cout << "Prolet";
	else if (a > 5 && a < 9)
		cout << "lqto";
	else if (a > 8 && a < 12)
		cout << "Esen";
	else
		cout << "Zima";
}