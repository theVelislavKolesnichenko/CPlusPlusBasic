#include <iostream>
using namespace std;

int main()
{
	cout << "Въведете 3 числа: \n";
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	cout << "Сборът от числата е:" << sum << endl;
	float average = sum / 3.0;
	cout << "Средната стойност на числата е:" << average << endl;
return 0;
}