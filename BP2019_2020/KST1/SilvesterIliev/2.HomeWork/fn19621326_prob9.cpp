#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
struct struct1 {
	int a;
	int b;
	int c;
	int P;
};
int main()
{
	struct1 A;
	cout << "�������� ���������� �� � =" << endl;
	cin >> A.a;
	cout << "�������� ���������� �� b =" << endl;
	cin >> A.b;
	cout << "�������� ���������� �� c =" << endl;
	cin >> A.c;
	A.P = A.a + A.b + A.c;
	cout << "���������� �� P � = " << A.P << endl;	
	return 0;
}