#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	float x, y;
	cout << " - Homework N1, Ex 8 - \n\n"
		<< "Entering values:\n"
		<< "Y=";
	cin >> y;
	x = (2*y + 5)/(14-y/3);
	cout << "\n\nResult:\n"
		<< "X=" << x << endl;

	system("pause");
}

//��������� �������� ����� �� ������� x = (2y + 5)/(14 - y/3) ��� �������� �� ������������ ��������� �� y.