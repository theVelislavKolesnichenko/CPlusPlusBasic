#include <iostream>
using namespace std;

struct Rectangle
{
	double a, b;
};
Rectangle Fninput()
{
	Rectangle v;
	cout << "Please enter rectangle a = ";
	cin >> v.a;
	cout << "Please enter rectangle b = ";
	cin >> v.b;

	return v;
}
int FnS(Rectangle n)
{
	return n.a * n.b;
}
int main()
{
	Rectangle w;
	w = Fninput();
	cout << "S = " << FnS(w) << endl;
	system("Pause");
	return 0;
}
