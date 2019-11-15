#include <iostream>
using namespace std;
int main()
{
	int Hundreds, Tens, Units, N = 576;
	Units = N % 10;
	Tens = (N / 10) % 10;
	Hundreds = (N / 100) % 10;
	cout << "Units = " << Units << endl;
	cout << "Tens = " << Tens << endl;
	cout << "Hundreds = " << Hundreds << endl;
	return 0;
}