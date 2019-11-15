#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "zadai stoinost na stranata 'a'" << endl;
	cin >> a;
	cout << "zadai stoinost na stranata 'b'" << endl;
	cin >> b;
	int P = a * 2 + b * 2;
	int S = a*b;
	cout << "Obikolkata na pravougulnika e ravna na " << P << endl;
	cout << "Liceto na pravougulnika e ravno na " << S << endl;
	return 0;
	
}