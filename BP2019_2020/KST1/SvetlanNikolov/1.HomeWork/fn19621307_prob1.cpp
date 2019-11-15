#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int c;
	float d;
	cout << "Vuvedete a = ";
	cin >> a;
	cout << "Vuvedete b = ";
	cin >> b;
	c = a / b;
	cout << "c = " << c << endl << "Krai na a) " << endl; //Тук резултатът е цяло число, понеже се използва 'int' // 
	cout << "Sledva b) " << endl << "Vuvedete otnovo a = ";
	cin >> a;
	cout << "Vuvedete otnovo b = ";
	cin >> b;
	d = float(a) / b;
	cout << "d = " << d; //Тук резултатът също е дробно число, тъй като се изполва 'double' и 'float' //
	
	return 0;

}