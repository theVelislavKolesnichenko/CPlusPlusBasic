#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

string decod(string str);

int main()
{
	setlocale(LC_ALL, "");
	string str = "���� ������";
	cout << decod(str) << endl;
	str = "*�$� ��*�$�";
	cout << decod(str) << endl;
	str = "���� ��*�$�";
	cout << decod(str) << endl;	

	string currency[10] = { "AUD", "BRL", "CAD", "CHF", "CNY","CZK","DKK","GBP","HKD", "HRK" };

}

string decod(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '�' || str[i] == '�') {
			str[i] = '$';
		}
		else if (str[i] == '�' || str[i] == '�') {
			str[i] = '*';
		}
		else if (str[i] == '$') {
			str[i] = (i == 0) ? 'T' : '�';		
		}
		else if (str[i] == '*') {
			str[i] = (i == 0) ? '�' : '�';
		}
	}

	return str;
}
