#include <iostream>
using namespace std;

void calc(int y);

int main()
{
	float y;
	cout << "Homework - 3 | Exercise - 4\n\n"
		<< "y=";
	cin >> y;

	calc(y);

	return 0;
}

void calc(int y)
{
	if (y == 0)
	{
		cout << "The number can not be devided by 0\n";
	}
	else {
		cout << "x=" << 20 / y << endl;
	}
}

//Съставете програма с функция за изчисление на резултата от уравнението
//x = 20 / y.Във функция main се дефинира променлива реално число ако числото
//е равно на 0 да се изведе съобщение, че не може да се дели на 0, в противен случаи
//да се изведе резултата от уравнението.