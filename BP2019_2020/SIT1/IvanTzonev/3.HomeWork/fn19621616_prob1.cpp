#include <iostream>
using namespace std;
float x(char ch);

int main() 
{
	int a, b;
	a = x('a');
	b = x('b');
	cout << "~a = " << ~a << endl;
	cout << "~b = " << ~b << endl;
	cout << "a&b = " << (a & b) << endl;
	cout << "a|b = " << (a | b) << endl;
	cout << "a^b = " << (a ^ b) << endl;
	int c = a << 5; 
	cout << "a<<5 = " << c << endl;
	int d = b >> 4;
	cout << "b>>4 = " << d << endl;
return 0;
}
float x(char ch) 
{
	float x;
	cout << ch << " = ";
	cin >> x;
return x;
}