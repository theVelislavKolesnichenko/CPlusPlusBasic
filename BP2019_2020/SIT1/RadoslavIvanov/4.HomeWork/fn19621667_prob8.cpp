#include <iostream>
using namespace std;

void X(int n);

int main()
{
	int a;
	do {
		cout << "\na=";
		cin >> a;
		X(a);
	} while (a != 0);
}

void X(int n)
{
	if (n < 1000)cout << "\nless four digit";
	else if (n >= 1000 && n < 10000) cout << "\nfour digit";
	else if (n >= 10000)cout << "\nmore four digit";
}