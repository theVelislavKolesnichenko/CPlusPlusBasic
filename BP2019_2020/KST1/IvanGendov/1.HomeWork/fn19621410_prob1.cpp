
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	float d;
	cout << "Vuvedete a=";
	cin >> a;
	cout << "Vuvedete b=";
	cin >> b;
	c = a / b;
	cout << "Rezultatut e " << c << endl << "Tova beshe vsichko ot a)" << endl; //Tuk rezultatut e cqlo chislo poneje izpolzvam "int".  
	cout << "Sledva b)" << endl << "Vuvedete otnovo a=";
	cin >> a;
	cout << "Vuvedete otnovo b=";
	cin >> b;
	d = float(a) / b;
	cout << "Rezultatut e " << d;//Tuk rezultatut e drobno chislo poneje izpolzvam "double" i "float".
	return 0;
}