#include <iostream>
using namespace std;

int funct(int a)
{
	if (a > 0 && a < 1) { cout << "baby"<<endl; }
	if (a >= 1 && a < 3) { cout << "toddler" << endl; }
	if (a >= 3 && a < 5) { cout << "Preschool" << endl; }
	if (a >= 5 && a <= 12) { cout << "Gradeschooler" << endl; }
	if (a >= 13 && a < 18) { cout << "teen" << endl; }
	if (a >= 18 && a < 21) { cout << "young adult" << endl; }
	return 0;
}

int main()
{
	char a;
	cin >> a;
	cout << funct(a) << endl;
	return 0;
}