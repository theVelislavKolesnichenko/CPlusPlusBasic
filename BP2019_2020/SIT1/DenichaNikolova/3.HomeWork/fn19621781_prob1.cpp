#include <iostream>

using namespace std;

int input_int();

int main()
{
	int x, y;

	x = input_int();
	y = input_int();

	cout << "Bitwise NOT " << x << ": " << ~x << endl;
	cout << "Bitwise NOT " << y << ": " << ~y << endl;
	cout << "Bitwise " << x << " AND " << y << ": " << (x & y) << endl;
	cout << "Bitwise " << x << " OR " << y << ": " << (x | y) << endl;
	cout << "Bitwise " << x << " XOR " << y << ": " << (x ^ y) << endl;
	cout << "Bitwise shift left " << x << ": " << (x << 5) << endl;
	cout << "Bitwise shift left " << y << ": " << (y << 5) << endl;
	cout << "Bitwise shift right " << x << ": " << (x >> 4) << endl;
	cout << "Bitwise shift right " << y << ": " << (y >> 4) << endl;


	system("pause");

	return 0;
}



int input_int()
{
	int i;

	cout << "Enter integer: ";
	cin >> i;

	return i;
}