#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	float c, d;
	c = a / b;
	cout << "c=" << c<<endl; //��������� �� ������� � ���� �����, ����� �� ��������.
	d =(float)a / b;
	cout << "d= " << d<<endl; //�������� �� ������� � ������� �������.


	return 0;
}
