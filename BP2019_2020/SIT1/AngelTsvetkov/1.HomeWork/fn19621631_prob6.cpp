#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "�������� a: ";
	cin >> a;
	cout << "�������� b: ";
	cin >> b;
	cout << "�������� c: ";
	cin >> c;
	double z = 2 * (a - b)*(a - c);
	cout << "z � ����� ��: " << z << endl;
	return 0;
}