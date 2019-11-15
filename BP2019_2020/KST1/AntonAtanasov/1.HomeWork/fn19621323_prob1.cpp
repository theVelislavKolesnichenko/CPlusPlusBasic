#include <iostream> 
using namespace std;

int main()
{
	int a, b; float c, d;
	cout << "Vyvedete a = ";
	cin >> a;
	cout << "Vyvedete b = ";
	cin >> b;
	c = a / b;
	cout << "c = " << c << endl;
	d = (float) a / b;
	cout << "d = " << d << endl;
	return 0;
}
// При c = a / b се получава цяло число, защото е използван типа int.
// При d = (float) a / b се получава число с дробна част, защото е използван типа float.
