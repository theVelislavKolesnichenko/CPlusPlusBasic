#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Vyvedete a = ";
	cin >> a;
	cout << "Vyvedete b = ";
	cin >> b;
	cout << "Vyvedete c = ";
	cin >> c; 
	int z;
	z = 2*(a - b)*(a - c);
	cout << "Stoinostta na izraza e: " << z;
	
	return 0;
}