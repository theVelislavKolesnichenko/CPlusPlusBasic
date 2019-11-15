
#include <iostream>
using namespace std;

int main()
{	
	int a, b, c, z;
	cout << "Vuvedete stoinost na a= ";
	cin >> a;
		cout <<endl<< "Vuvedete stoinost na b= ";
		cin >> b;
		cout <<endl<< "Vuvedete stoinost na c= ";
		cin >> c;
		z = 2 * (a - b) * (a - c);
		cout << "Rezultatut na uravnenieto z=2(a-b)(a-c) e " << z;
		return 0;
}