#include <iostream>
using namespace std;
int Hundreds(int a);
int Tens(int a);
int Ones(int a);

int main()
{
	int a = 837;
	cout << "Ones: " << Ones(a) << endl;
	cout << "Tens: " << Tens(a) << endl;
	cout << "Hundreds: " << Hundreds(a) << endl;
}

int Hundreds(int a)
{
	return a / 100;
}
int Tens(int a)
{
	return (a / 10) % 10;
}
int Ones(int a)
{
	return a % 10;
}
