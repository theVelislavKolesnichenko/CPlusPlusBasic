#include<iostream>
using namespace std;

int funct1(int a, int b);

int main()
{
	int a;
	int b;
	cout << "������ �������� �� �=" ;
	cin >> a;
	cout << endl << "������ �������� �� b=";
	cin >> b;
	cout << funct1(a, b);
	return 0;
}
int funct1(int a, int b)
{
	if (a > b)
	{
		cout << "������� � � ��-������";
		return a;
	}
	else if (a < b)
	{
		cout << "������� b � ��-������";
		return b;
	}
	else
	{
		cout << "����� ��" << endl;
			return 0;
	}

}