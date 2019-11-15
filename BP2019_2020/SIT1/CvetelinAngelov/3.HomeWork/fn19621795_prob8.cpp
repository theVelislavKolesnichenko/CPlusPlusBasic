#include <iostream>
using namespace std;

int symbol_num(char symb);

int main()
{
	char symb;
	cout << "Homework - 3 | Exercise - 8\n\n"
		<< "Symbol: ";
	cin >> symb;
	if (symbol_num(symb))
	{
		cout << symb << " -> " << symbol_num(symb);
	}
	else {
		cout << "You must enter only [a-zA-Z] chars.";
	}

	return 0;
}

int symbol_num(char symb)
{
	int i(0);
	if ((int)symb >= 65 && (int)symb <= 90)
	{
		i = ((int)symb % 65) + 1;
	}
	else if ((int)symb >= 97 && (int)symb <= 122)
	{
		i = ((int)symb % 97) + 1;
	}
	return i;
}

// ��������� �������� � �������, ����� ����� ���� �������� ������ �� ����� �� ����������
// ������.��������� ������ ���� ������ ��������� ������ ��� ���� ������ � ����� �� 'a' ��
// 'z' ����� ��� ������ �� �� ����� ���� �������� ������ �� �������, ������ '�' -> 1, ��
// 'b' -> 2 � �.�.�� ������ �� �� ������� ������� � ������ �����.