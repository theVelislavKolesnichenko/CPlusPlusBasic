#include <iostream>
using namespace std;
int no(int a);
int and(int a, int b);
int or(int a, int b);
int xor(int a, int b);
int izml1(int a);
int izml2(int b);
int izmd1(int a);
int izmd2(int b);

int main()
{
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"~a="<<no(a)<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"a&b="<<and(a,b)<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"a|b="<<or(a,b)<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"a^b="<<xor(a,b)<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"a<<5="<<izml1(a)<<endl;
	cout<<"b=";
	cin>>b;
	cout<<"b<<5="<<izml2(b)<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"a>>4="<<izmd1(a)<<endl;
	cout<<"b=";
	cin>>b;
	cout<<"b>>4="<<izmd2(b)<<endl;
	return 0;
}
int no(int a)
{
	return ~a;
}
int and(int a, int b)
{
	return a&b;
}
int or(int a, int b)
{
	return a|b;
}
int xor(int a, int b)
{
	return a^b;
}
int izml1(int a)
{
	return a<<5;
}
int izml2(int b)
{
	return b<<5;
}
int izmd1(int a)
{
	return a>>4;
}
int izmd2(int b)
{
	return b>>4;
}
	





