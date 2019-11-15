#include <iostream>
using namespace std;

int Units(int number);
int Tens(int number);
int Hundreds(int number);

int main()
{
	int number1, number2, number3;
	cout << "Enter three three digit numbers:\n";
	cin >> number1;
	cout << "Unit = " << Units(number1) << endl;
	cin >> number2;
	cout << "Ten = " << Tens(number2) << endl;
	cin >> number3;
	cout << "Hundred = " << Hundreds(number3) << endl;
	const int constant1 = 837;
	cout << "Parts of 837\n" << "Hundred = " << Hundreds(constant1) << " " << "Ten = " << Tens(constant1)
		<< " " << "Unit = " << Units(constant1);
}

int Units(int number)
{
	return number % 10;
}
int Tens(int number)
{
	return number / 10 % 10;
}
int Hundreds(int number)
{
	return number / 100 % 10;
}