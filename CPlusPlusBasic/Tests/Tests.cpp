#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

string decod(string str);

int main()
{
	setlocale(LC_ALL, "");
	string str = "Нито едното";
	cout << decod(str) << endl;
	str = "*и$о ед*о$о";
	cout << decod(str) << endl;
	str = "Нито ед*о$о";
	cout << decod(str) << endl;	

	string currency[10] = { "AUD", "BRL", "CAD", "CHF", "CNY","CZK","DKK","GBP","HKD", "HRK" };

}

string decod(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'т' || str[i] == 'Т') {
			str[i] = '$';
		}
		else if (str[i] == 'н' || str[i] == 'Н') {
			str[i] = '*';
		}
		else if (str[i] == '$') {
			str[i] = (i == 0) ? 'T' : 'т';		
		}
		else if (str[i] == '*') {
			str[i] = (i == 0) ? 'Н' : 'н';
		}
	}

	return str;
}
