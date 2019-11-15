#include <iostream>
using namespace std;

struct Triangle
{
	int a, b, c;
};

int TrianglePerimeter(Triangle);

int main()
{
	Triangle P;
	cout << "Enter a, b and c:\n";
	cin >> P.a >> P.b >> P.c;
	cout << "P=" << P.a + P.b + P.c;
}
