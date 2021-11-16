#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	int start = -1234, end = 1234, number;

	cout << "Въведете число от -1234 до 1234: ";
	cin >> number;

	while (number < start || number > end)
	{
		cout << "Въведеното число не е в интервала" << endl;
		cout << "Въведете число от -1234 до 1234: ";
		cin >> number;
	} 

	cout << "Въведеното число е: " << number << endl;
}