#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int A, B;
	float C, D;
    cout << "�������� A= ";
	cin >> A;
	cout << "�������� B= ";
	cin >> B;
	C = A / B;
	cout << "�������� = " << C << endl;//�������� �� �������� �� C: ������� ���� �����.
	float E=A;
	D = E / B;
	cout << "�������� = " << D << endl;//�������� �� ��������� �� D: ������� � �������� ����.


	return 0;
}