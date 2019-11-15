#include <iostream>
using namespace std;

struct Triangle
{
	double a, b, c;
};

Triangle Create()
{
	Triangle temp;
	cout << "Enter A = ";
	cin >> temp.a;
	cout << "Enter B = ";
	cin >> temp.b;
	cout << "Enter C = ";
	cin >> temp.c;
	return temp;
}

double Perimeter(Triangle P)
{
	return P.a + P.b + P.c;
}

int main()
{
	Triangle Tony = Create();
	cout << "Perimeter = "<< Perimeter(Tony);
}