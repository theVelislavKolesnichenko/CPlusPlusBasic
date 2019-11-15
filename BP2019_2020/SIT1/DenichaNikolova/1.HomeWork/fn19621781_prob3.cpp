#include <iostream>
using namespace std;

int main()
{
	//cout << "Enter an integer:" << endl;
	int number = 576;
	//cin >> number;
	int n1, n2, n3;
	n1 = number % 10;
	number = number / 10;
	n2 = number % 10;
	number = number / 10;
	n3 = number % 10;
	//number = number / 10;
	cout << "Units " << n1 << " ";
	cout << "Tens " << n2 << " ";
	cout << "Hundreds " << n3 << endl;

	return 0;
}