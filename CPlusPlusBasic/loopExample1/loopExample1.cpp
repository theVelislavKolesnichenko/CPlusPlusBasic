#include <iostream>
using namespace std;

/*
	Използвайте финкции, за да изведете целите числата от 1 до n, с for, while и do while
	- for да прекъсне при първото срещане на нечетно число
	- while да прескача извеждането на четните числа
*/

void printNumberWithFor(int n);
void printNumberWithWhile(int n);
void printNumberWithDoWhile(int n);

int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;

	cout << "print Number With For\n";
	printNumberWithFor(n);
	cout << "\nprint Number With Whil\n";
	printNumberWithWhile(n);
	cout << "\nprint Number With While\n";
	printNumberWithDoWhile(n);

}

void printNumberWithFor(int n)
{
	for (int y = 1; y <= n; y++)
	{
		if ((y % 50) == 0)
			break;

		cout << y << " ";
	}
}

void printNumberWithWhile(int n)
{
	int y = 0;

	while (y < n)
	{
		y = y + 1;

		if (!(y % 2))
			continue;

		cout << y << " ";
	}
}

void printNumberWithDoWhile(int n)
{
	int y = 1;
	do
	{
		cout << y << " ";
		y += 1;
	} while (y <= n);
}