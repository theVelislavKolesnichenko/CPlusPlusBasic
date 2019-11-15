#include <iostream>

using namespace std;

void yearIn();

int main()
{
	yearIn();
	return 0;
}

void yearIn()
{
	do
	{
		cout << "Enter an year: ";
		int year;
		cin >> year;
		if (year < 0)
		{
			break;
		}
		else {
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			{
				cout << "Leap year\n";
			}
			else
			{
				cout << "Not a leap year\n";
			}
			cout << "-------------\n\n";
		}
	} while (true);
}

//��������� �������� � ����� �� ������� ������ �� ����������� �� ����� �� ����� �� 0.
//�� �� ������� ������� ����� ������ ������� � �� �� ������ ���� �������� � ��������� ��� ��.