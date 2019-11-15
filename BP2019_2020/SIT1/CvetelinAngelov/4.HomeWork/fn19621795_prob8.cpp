#include <iostream>

using namespace std;

void inputCheck();

int main()
{
	inputCheck();
	return 0;
}

void inputCheck()
{
	do
	{
		cout << "Enter a number: ";
		double a;
		cin >> a;
		if (a == 0)
		{
			break;
		}
		else if ((a > 999 && a < 10000) || (a < -999 && a > -10000))
		{
			cout << "Four-digit\n";
		}
		else if (a < 1000 && a > -1000)
		{
			cout << "Less four-digit\n";
		}
		else if (a > 9999 || a < -999)
		{
			cout << "More four-digit\n";
		}
	} while (true);
}

//��������� �������� � ������� ����� �� ��������� ���� �������� ����� �� ������������ � ������
//�������.��� ������� � ������ ������� �� ������� "four-digit" ��� � �� - ������ "more four-digit"
//��� � �� ����� "less four-digit".���������� �� ��������� �� �� �������� ����� � �� �� ����������
//������ �� �� ������ 0. ������ �� ������ 0 ���������� ���������� ������.