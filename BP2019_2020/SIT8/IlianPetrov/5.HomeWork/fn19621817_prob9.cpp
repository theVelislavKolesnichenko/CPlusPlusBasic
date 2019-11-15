#include <iostream>
using namespace std;
void Mul(int a, int b, int* mul);

int main()
{
	int a, b, mul;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << mul;
	Mul(a, b, &mul);
	cout << mul;
	return 0;
}
void Mul(int a, int b, int* mul)
{
	(*mul) = a * b;
}