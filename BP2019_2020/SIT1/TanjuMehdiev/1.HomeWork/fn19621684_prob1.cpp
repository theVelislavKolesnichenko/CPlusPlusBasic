#include <iostream>
using namespace std;
int main()
{
	int A,B;
	cout<<"A=";
	cin>>A;
	cout<<"B=";
	cin>>B;
	const double C=A/B;
	cout<<showpoint<<"C="<<C<<endl;//a) podtochka
	const double D=(float)A/B;
	cout<<showpoint<<"D="<<D<<endl;//b) podtochka
	return 0;
}
//� �) �������� �� � ����� ������ ��������� ������� � int � �� ������ �� � ����.
//� b) �������� � ����� ������ ������������ ������� � ��� float � ���� �� ��������� �� ������ ������ ��������.