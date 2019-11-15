#include <iostream>
#include <math.h>

using namespace std;

float input(char symb);
float x_calc(float a, float b);

int main()
{
	cout << " - Homework N2, Ex 6 - \n\n";
	float a, b;
	a = input('a');
	b = input('b');
	cout << "X=" << x_calc(a, b) << endl;
}

float input(char symb)
{
	float val;
	cout << "Please insert a value for the " << symb << ":";
	cin >> val;
	return val;
}

float x_calc(float a, float b)
{
	return pow(a + b, 3) + (pow(a, 2) + 2*a*b + pow(b, 2));
}

//Съставете програма с функции за :
//	- Въвеждане на реално число.Приема като входни параметри символа на променливата
//		която ще се въвежда.Връща като резултат стойността на въведеното число.
//	- Изчисление на x = (a + b)³ + (a² + 2ba – 2ab + b²).Приема като входни параметри
//		променливите a и bи връща като резултат отговора на уравнението.
//Във функция main въведете две променливи и изведете резултата от изчислението на
//формулата.