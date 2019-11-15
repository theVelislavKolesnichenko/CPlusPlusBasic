#include <iostream>

using namespace std;

int Units(int);
int Tens(int);
int Hundreds(int);

int main()
{
	int number = 837;

	cout<<("Number: %d\n"
		"Units: %d\n"
		"Tens: %d\n"
		"Hundreds: %d\n",
		number, Units(number), Tens(number), Hundreds(number));

	return 0;
}

int Units(int x) {
	return x % 10;
}

int Tens(int x) {
	return (x / 10) % 10;
}
int Hundreds(int x) {
	return (x / 100) % 10;
}
