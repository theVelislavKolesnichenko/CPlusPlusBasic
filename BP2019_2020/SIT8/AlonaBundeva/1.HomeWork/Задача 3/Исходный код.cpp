#include<iostream>
using namespace std;
int main()
{
	int a=576;
	int b,c,d;
	b=a/100;
	c=a/10%10;
	d=a%10;
	cout<<"Stotici: "<<b<<endl;
	cout<<"Desetici: "<<c<<endl;
	cout<<"Edinici: "<<d<<endl;
	return 0;
}