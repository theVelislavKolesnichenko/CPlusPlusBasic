#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int c;
	float d;
	cout << "Vuvedete a = ";
	cin >> a;
	cout << "Vuvedete b = ";
	cin >> b;
	c = a / b;
	cout << "c = " << c << endl << "Krai na a) " << endl; //��� ���������� � ���� �����, ������ �� �������� 'int' // 
	cout << "Sledva b) " << endl << "Vuvedete otnovo a = ";
	cin >> a;
	cout << "Vuvedete otnovo b = ";
	cin >> b;
	d = float(a) / b;
	cout << "d = " << d; //��� ���������� ���� � ������ �����, ��� ���� �� ������� 'double' � 'float' //
	
	return 0;

}