#include <iostream>
using namespace std;
int Function1a(int a);
int Function1b(int b);
int Function2(int a, int b);
int Function3(int a, int b);
int Function4(int a, int b);
int Function5a(int a);
int Function5b(int b);
int Function6a(int a);
int Function6b(int b);


int main()
{
	int a, b;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "~a = " << Function1a(a) << endl;
	cout << "~b = " << Function1b(b) << endl;
	cout << "a&b = " << Function2(a, b) << endl;
	cout << "a|b = " << Function3(a, b) << endl;
	cout << "a^b = " << Function4(a, b) << endl;
	cout << "a<<5 = " << Function5a(a) << endl;
	cout << "b<<5 = " << Function5b(b) << endl;
	cout << "a>>4 = " << Function6a(a) << endl;
	cout << "b>>4 = " << Function6b(b) << endl;

}
int Function1a(int a)
{
	return (~a);
} 
int Function1b(int b)
{
	return (~b);
}
int Function2(int a, int b)
{
	return (a & b);
}
int Function3(int a, int b)
{
	return (a | b);
}
int Function4(int a, int b)
{
	return (a ^ b);
}
int Function5a(int a)
{
	return (a << 5);
}
int Function5b(int b)
{
	return (b << 5);
}
int Function6a(int a)
{
	return (a >> 4);
}
int Function6b(int b)
{
	return (b >> 4);
}





