#include <iostream>
using namespace std;
int num(char ch)
{
	int b;
	cout << ch << "=";
	cin >> b;
	return b;
}

int main()
{
	int a = num('a');
	int b = num('b');
	cout << "~a= " << ~a << "\n" << "~b= " << ~b << endl;
	cout << "a&b= " << (a&b) << endl;
	cout << "a|b= " << (a|b)<<endl;
	cout << "a^b= " << (a^b) << endl;
	int c = a << 5;
	int d = b << 5;
	cout << "a<<5= "<< c <<"\n"<<"b<<5= " << d << endl;
	int y = a >> 4;
	int z = b >> 4;
	cout <<"a>>4= "<< y<<"\n"<<"b>>4= " << z << endl;
	return 0;
}

