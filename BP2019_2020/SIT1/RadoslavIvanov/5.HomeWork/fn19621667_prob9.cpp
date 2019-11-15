#include <iostream>
using namespace std;

void Mul(int &mul);

int main()
{
	int mul = 0;
	cout << mul << endl;;
	Mul(mul);
	cout << mul<<endl;
	return 0;
}

void Mul(int &mul)
{
	int a, b;
	cin >> a >> b;
	mul = a * b;
}