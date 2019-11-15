#include <iostream>
#include <String>

using namespace std;

int intInput(string);
void month(int a);

int main()
{
	do
	{
		double a, c;
		a = intInput("Season");
		month(a);
		cout << "- - - - - - - - -\n\n";
	} while (1);
	return 0;
}

int intInput(string symb)
{
	cout << symb << " = ";
	int a;
	cin >> a;
	return a;
}

void month(int a)
{
	switch (a)
	{
		case 1: case 2: case 11: case 12:
			cout << "Winter\n";
			break;
		case 3: case 4: case 5:
			cout << "Spring\n";
			break;
		case 6: case 7: case 8:
			cout << "Summer\n";
			break;
		case 9: case 10:
			cout << "Fall\n";
			break;
		default:
			cout << "This is not a month.\n";
			break;
	}
}

//��������� �������� � ������� ����� �� ������� ����� �� ����� �� �������� ������� ���� � ������,
//����� ��� ����� �����.��� �� ������ ����� �� ������ �� 12 ��� �� ����� �� 1 �� �� ������ ���������
//��������� �� ���� �� � �����.