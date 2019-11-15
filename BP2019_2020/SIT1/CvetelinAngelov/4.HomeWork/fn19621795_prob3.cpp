#include <iostream>
#include <String>

using namespace std;

int intInput(char symb);
int lcm(int a, int b);
int gcd(int a, int b);

int main()
{
	do
	{
		double a, b;
		a = intInput('a');
		b = intInput('b');
		cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;
		cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
		cout << "- - - - - - - - -\n\n";
	} while (1);
	return 0;
}

int intInput(char symb)
{
	cout << symb << "=";
	int a;
	cin >> a;
	return a;
}

int lcm(int a, int b)
{
	int max;


	if (a > b)
		max = a;
	else
		max = b;

	while (true)
	{
		if (max % a == 0 && max % b == 0)
		{
			break;
		}
		else
			max++;
	}
	return max;
}

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}


//Съставете програма с функция :
//
//която приема 2 реални числа и се намира най - малкото им общо кратно
//която приема 2 реални числа и се намира най - големият им общ делител.
//В мейн да се изведат резултатите от двете функции с подходящи съобщения за НОД и НОК на две числа.