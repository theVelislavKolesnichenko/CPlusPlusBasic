#include <iostream>

using namespace std;

float input(char symb);
float x_calc(float a, float b);

int main()
{
	cout << " - Homework N2, Ex 5 - \n\n";
	float a, b;
	a = input('a');
	b = input('b');
	cout << "X=" << x_calc(a, b)<<endl;
}

float input(char symb)
{
	float val;
	cout << "Please insert a value for the " << symb<<":";
	cin >> val;
	return val;
}

float x_calc(float a, float b)
{
	return 2 * ((a - b) / (b - a));
}

//Съставете програма с функции за :
//	- Въвеждане на реално число.Приема като входни параметри символа на променливата 
//		която ще се въвежда.Връща като резултат стойността на въведеното число.
//	- Изчисление на x = 2((a−b) / (b−a)).Приема като входни параметри променливите 
//		a и bи връща като резултат отговора на уравнението.
//Във функция main въведете две променливи и изведете резултата от изчислението на формулата.