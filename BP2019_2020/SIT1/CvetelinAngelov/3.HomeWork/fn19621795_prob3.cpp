#include <iostream>

using namespace std;

void pos_neg(float a);

int main()
{
	float a;

	cout << "Homework - 3 | Exercise - 3\n\n"
		<< "Enter a number=";
	cin >> a;

	pos_neg(a);

	return 0;
}

void pos_neg(float a)
{
	if (a < 0)
	{
		cout << "The entered value is negative.\n";
	}
	else if (a > 0)
	{
		cout << "The entered value is positive.\n";
	}
}
//Съставете програма с функция за проверка на положителни число.
//Функцията приема като входен параметър реално число и извежда на екрана positive
//ако числото е положително или negative ако е отрицателно.