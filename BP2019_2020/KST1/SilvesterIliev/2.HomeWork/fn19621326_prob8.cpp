#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int funct1(int t)
{
	return floor(987 / t);
}
int funct2(int V)
{
	return floor(987 / V);
}
int main()
{
	int a;
	int b;
	cout << "������� � = " << endl;
	cin >> a;
	cout << "��������� � = " << funct1(a) << endl;

	cout << "��������� � = " << endl;
	cin >> b;
	cout << "������� � = " << funct2(b) << endl;
	return 0;
}