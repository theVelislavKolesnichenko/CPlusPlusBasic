#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "�������� �: ";
	cin >> a;
	 cout << "�������� �: ";
	cin >> b;
	float c = a / b;
	cout << "C � ����� ��: " << c << endl;
float d = (float)a / b;
cout << "D � ����� ��: "<< d << endl;
/* ��� � ��������� � ����������� � � ��� �������. ��� �=20 b=6 -  ���������� �� � 3.
��� D: � �� ��������� ���� ������ ����� � ��������� �� ��������� ���� ������� � ������ ������� ��� �=20 b=6 -  ���������� �� � 3.33333.
*/
return 0;
}
