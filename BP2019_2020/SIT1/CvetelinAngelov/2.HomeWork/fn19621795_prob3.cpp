#include <iostream>

using namespace std;

float input(char symb);
float average_val(int a, int b, int c, int d);

int main()
{
	cout << " - Homework N2, Ex 3 - \n\n";
	int a, b, c, d;

	a = input('a');
	b = input('b');
	c = input('c');
	d = input('d');

	cout << "Average value: " << average_val(a, b, c, d);
}

float input(char symb)
{
	float val;
	cout << "Please enter a value for " << symb << ":";
	cin >> val;
	return val;
}

float average_val(int a, int b, int c, int d)
{
	return (float)(a + b + c + d) / 4;
}

// Съставете програма функции за
//	- Въвеждане на реално число.Приема като входни параметри символа 
//	на променливата която ще се въвежда.Връща като резултат стойността на 
//	въведеното число.
//	- Изчисление на средната стойност на четири числа.
// Във функция main въведете четири цели числа, изведете средната им стойност.