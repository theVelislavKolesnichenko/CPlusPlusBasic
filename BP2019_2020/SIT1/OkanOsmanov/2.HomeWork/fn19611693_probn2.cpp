#include <iostream>
using namespace std;

double printNumber(double number);
double SUM(double a, double b);
double SUB(double a, double b);
double DIV(double a, double b);
double MUL(double a, double b);

int main()
{
	//��������� �� ���������� ������ �����
	double number, a, b;
	cout << "Enter a number:";
	cin >> number;
	cout << "Your number is:" << printNumber(number) << endl << endl;

	//�������� �� ������� � � b
	cout << "Operation (+)\n" << "Enter first number:";
	cin >> a;
	cout << "Enter second number:";
	cin >> b;
	cout << a << " + " << b << " = " << SUM(a, b) << endl << endl;

	//��������� �� ������� � � b
	cout << "Operation (-)\n" << "Enter first number:";
	cin >> a;
	cout << "Enter second number:";
	cin >> b;
	cout << a << " - " << b << " = " << SUB(a, b) << endl << endl;

	//������ �� ������� � � b
	cout << "Operation (/)\n" << "Enter first number:";
	cin >> a;
	cout << "Enter second number:";
	cin >> b;
	cout << a << " / " << b << " = " << DIV(a, b) << endl << endl;

	//���������� �� ������� � � b
	cout << "Operation (*)\n" << "Enter first number:";
	cin >> a;
	cout << "Enter second number:";
	cin >> b;
	cout << a << " * " << b << " = " << MUL(a, b) << endl << endl;
	return 0;
}

double printNumber(double number)
{
	return number;
}
double SUM(double a, double b)
{
	return a + b;
}
double SUB(double a, double b)
{
	return a - b;
}
double DIV(double a, double b)
{
	return a / b;
}
double MUL(double a, double b)
{
	return a * b;
}