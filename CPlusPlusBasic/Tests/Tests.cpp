#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	int start = -1234, end = 1234, number;

	cout << "�������� ����� �� -1234 �� 1234: ";
	cin >> number;

	while (number < start || number > end)
	{
		cout << "���������� ����� �� � � ���������" << endl;
		cout << "�������� ����� �� -1234 �� 1234: ";
		cin >> number;
	} 

	cout << "���������� ����� �: " << number << endl;
}