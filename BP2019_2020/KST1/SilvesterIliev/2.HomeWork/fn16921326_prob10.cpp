#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
struct struct1 {
	int a;
	int b;
	int S;
};
int main()
{
	struct1 A;
	cout << "�������� ���������� �� � =" << endl;
	cin >> A.a;
	cout << "�������� ���������� �� b =" << endl;
	cin >> A.b;
	A.S = A.a * A.b;
	cout << "���������� �� P � = " << A.S << endl;
	return 0;
}