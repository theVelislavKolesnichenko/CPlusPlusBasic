#include<iostream>

using namespace std;

int main()
{
	int n,x, y, z;
	cout << "Vuvedi tricifreno chislo "; cin >> n;
	x = n / 100;
	y = n / 10 % 10;
	z = n % 10;
	cout << "Units " << z << " Tens " << y << " Hundreds " << x << endl;
	
	return 0;
}