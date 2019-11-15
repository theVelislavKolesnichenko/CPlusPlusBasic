#include <iostream>
#include <conio.h>
using namespace std;
int Units(char a);
int Tens(char b);
int Hundreds(char c);
int main()
{
	cout<<"Въведете трицифрено число"<<endl;
			char a, b, c;
	a=getch();
	b=getch();
	c=getch();
	Hundreds(c);
	Tens(b);
	Units(a);
	
	





	return 0;
}
int Units(char a)
{
	cout<<a<<endl;
	return a;
}
int Tens(char b)
{
	cout<<b<<endl;
	return b;
}
int Hundreds(char c)
{
	cout<<c<<endl;
	return c;
}