#include <iostream>

using namespace std;

struct triangle
{
	float a, b, c;
};

triangle triangl_input();
float input(char symb);
float p_calc(triangle val);

int main()
{
	triangle a;
	cout << " - Homework N2, Ex 9 - \n\n";
	a = triangl_input();

	cout << "\nP=" << p_calc(a);
}

float input(char symb)
{
	float val;
	cout << symb << "=";
	cin >> val;
	return val;
}

triangle triangl_input()
{
	triangle a;
	a.a = input('a');
	a.b = input('b');
	a.c = input('c');
	return a;
}

float p_calc(triangle val)
{
	return val.a + val.b + val.c;
}

//Съставете програма дефинираща структура описваща триъгълници и функции за :
//	- Въвеждане на структурата.Функцията не приема параметри.Връща като резултат
//		променлива от типа на структурата.
//	- Извеждане обиколката на триъгълника.Приема като параметър променлива от типа
//		на структурата и връща като резултат стойността на обиколката му.
//Във функция main да се създаде променлива от типа на структурата и да се изведе
//обиколката на триъгълника.