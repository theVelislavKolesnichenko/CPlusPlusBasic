#include <iostream>

using namespace std;

int input_int(char a);
void bitNOT(int a, char symb);
void bitAND(int a, int b, char symb1, char symb2);
void bitOR(int a, int b, char symb1, char symb2);
void bitXOR(int a, int b, char symb1, char symb2);
void bitLEFT(int a, int b, char symb1);
void bitRIGHT(int a, int b, char symb1);

int main()
{
	int a, b;
	cout << "Homework - 3 | Exercise - 1\n\n";
	a = input_int('a');
	b = input_int('b');

	bitNOT(a, 'a');
	bitNOT(b, 'b');
	bitAND(a, b, 'a', 'b');
	bitOR(a, b, 'a', 'b');
	bitXOR(a, b, 'a', 'b');
	bitLEFT(a, 5, 'a');
	bitLEFT(b, 5, 'b');
	bitRIGHT(a, 4, 'a');
	bitRIGHT(b, 4, 'b');

	return 0;
}

int input_int(char a)
{
	int b;
	cout << a << "=";
	cin >> b;
	return b;
}

void bitNOT(int a, char symb)
{
	cout << symb << "~ -> " << (~a) << endl;
}

void bitAND(int a, int b, char symb1, char symb2)
{
	cout << symb1 << "&" << symb2 << " -> " << (a & b) << endl;
}

void bitOR(int a, int b, char symb1, char symb2)
{
	cout << symb1 << "|" << symb2 << " -> " << (a | b) << endl;
}

void bitXOR(int a, int b, char symb1, char symb2)
{
	cout << symb1 << "^" << symb2 << " -> " << (a ^ b) << endl;
}

void bitLEFT(int a, int b, char symb1)
{
	cout << symb1 << "<<" << b << " -> " << (a << b) << endl;
}

void bitRIGHT(int a, int b, char symb1)
{
	cout << symb1 << ">>" << b << " -> " << (a >> b) << endl;
}

//Съставете програма с функция за въвеждане на цяло число.Да се ваведат две цели числа
//и да се изведе стойноста на числата след като се приложът битови операции за :
//
//битово не
//битово и
//битово или
//битово XOR
//битово изместване на ляво с 5 символа
//битово изместване на дясно с 4 символа