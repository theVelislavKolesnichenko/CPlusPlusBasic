#include <iostream>
using namespace std;

struct Triangle
{
	int a, b, c;
};
Triangle FninputTriangle()
{
	Triangle t;
	cout << "Please enter triangle a = ";
	cin >> t.a;
	cout << "Please enter triangle b = ";
	cin >> t.b;
	cout << "Please enter triangle c = ";
	cin >> t.c;
	return t;
}
int FnP(Triangle f)
{
	return f.a + f.b + f.c;
}
int main()
{
	Triangle z;
	z = FninputTriangle();
	cout << "P = " << FnP(z) << endl;
	system("Pause");
	return 0;
}