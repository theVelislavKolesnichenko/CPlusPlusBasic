#include <iostream>

using namespace std;

float input(char symb);
float x_calc(float a);

int main()
{
	cout << " - Homework N2, Ex 7 - \n\n";
	float y, z;
	y = input('y');
	z = input('z'); // По условие в Main трябва да се въведат 2 променливи.
	// За какво ни е втората?
	cout << "X=" << x_calc(y) << endl;
}

float input(char symb)
{
	float val;
	cout << "Please insert a value for the " << symb << ":";
	cin >> val;
	return val;
}

float x_calc(float y)
{
	int res = 2 * (2 * y + 5) / (14 - y / 3);
	// ???
	// res = 2 * (2 * y + 5) / (14 - y) / 3;
	return res;
}

//Съставете програма с функции за :
//	- Въвеждане на реално число.Приема като входни параметри символа на променливата
//		която ще се въвежда.Връща като резултат стойността на въведеното число.
//	- Изчисление на x = 2(2y + 5) / (14 – y / 3. Приема като входни параметри
//		променливата у и връща като резултат отговора на уравнението.
//Във функция main въведете две променливи и изведете резултата от изчислението на
//формулата.