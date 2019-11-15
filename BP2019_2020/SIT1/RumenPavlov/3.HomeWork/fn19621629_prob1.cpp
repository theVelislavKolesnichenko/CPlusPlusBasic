#include <iostream>
using namespace std;
int bitnoa(int a, int b);
int bitnob(int a, int b);
int bitand(int a, int b);
int bitor(int a, int b);
int bitxor(int a, int b);
int bitlefta(int a, int b);
int bitleftb(int a, int b);
int bitrighta(int a, int b);
int bitrightb(int a, int b);
int main()
{
	int a, b, c, d, e, f, g, h, i, j,k;
	cout<<"Въведете 2 числа"<<endl;
	cin>>a;
	cin>>b;
	cout<<"a="<<a<<"  "<<"b="<<b<<endl;
	c=bitnoa(a, b);
	k=bitnob(a, b);
	d=bitand(a, b);
	e=bitor(a, b);
	f=bitxor(a, b);
	g=bitlefta(a, b);
	h=bitrighta(a, b);
	i=bitleftb(a, b);
	j=bitrightb(a, b);
    cout<<"~a="<<c<<endl<<"~b="<<k<<endl<<"a&b="<<d<<endl<<"a|b="<<e<<endl<<"a^b="<<f<<endl<<"a<<5="<<g<<endl<<"b<<5="<<i<<endl<<"a>>4="<<h<<endl<<"b>>4"<<j<<endl;


	return 0;
}

int bitnoa(int a, int b)
{
  int result;
	  result=~a;
	return result;
}
int bitnob(int a, int b)
{
  int result;
	  result=~b;
	return result;
}
int bitand(int a, int b)
{
  int result;
	  result=a&b;
	return result;
}
int bitor(int a, int b)
{
  int result;
	  result=a|b;
	return result;
}
int bitxor(int a, int b)
{
  int result;
	  result=a^b;
	return result;
}
int bitlefta(int a, int b)
{
  int result;
	  result=a<<5;
	return result;
}
int bitrighta(int a, int b)
{
  int result;
	  result=a>>4;
	return result;
}
int bitleftb(int a, int b)
{
  int result;
	  result=b<<5;
	return result;
}
int bitrightb(int a, int b)
{
  int result;
	  result=b>>4;
	return result;
}