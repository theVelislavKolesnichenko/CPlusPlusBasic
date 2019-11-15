#include<iostream>
using namespace std;

int FnTens(int a)
{
	return a % 10;
}

int Fndesetici(int a)
{
	int b = a % 100;
	return b / 10;
}
int FnHundreds(int a)
{
	return a / 100;
}
int main()
{
	cout << "Tens = " << FnTens(837) << endl;
	cout << "Desetici = " << Fndesetici(837) << endl;
	cout << "Hundreds = " << FnHundreds(837) << endl;
	system("Pause");
	return 0;
}