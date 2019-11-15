#include <iostream>

using namespace std;

void larger_num(int a, int b);

int main()
{
	int a, b;
	cout << "Homework - 3 | Exercise 2\n\n"
		<< "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	larger_num(a, b);
	
	return 0;
}

void larger_num(int a, int b)
{
	if (a > b)
	{
		cout << "The larger number is " << a;
	}
	else {
		cout << "The larger number is " << b;
	}
}

//Съставете програма с функция за намиране на по - голямото от 2 числа.
//Във функция main се дефинират 2 променливи от реален тип, въвеждат се от
//клавиятурата и се извежда по - голямото от двете с помоща на функцията.