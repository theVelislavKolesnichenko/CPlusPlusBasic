#include <iostream>
using namespace std;

struct Rectangle
{
	double a, b;
};

Rectangle Create()
{
	Rectangle temp;
	cout << "Enter A = ";
	cin >> temp.a;
	cout << "Enter B = ";
	cin >> temp.b;
	return temp;
}

double Area(Rectangle P)
{
	return P.a * P.b;
}

int main()
{
	Rectangle Tony = Create();
	cout << "Area = " << Area(Tony);
}