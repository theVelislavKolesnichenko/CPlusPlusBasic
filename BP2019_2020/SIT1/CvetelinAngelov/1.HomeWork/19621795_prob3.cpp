#include <iostream>

using namespace std;

void main()
{
	int a(576);
	cout << " - Homework N1, Ex 3 - \n\n"
		<< "\nResult:\n"
		<< "Units "<<a%10
		<< " Tens "<<(a/10)%10
		<< " Hundreds " <<(a/100)%10
		<< endl;

	system("pause");
}

//��������� �������� ����� ������� ������� �� ���������, ���������� � ��������� �� ������� 576, ��� ������:
//Units 6 Tens 7 Hundreds 5