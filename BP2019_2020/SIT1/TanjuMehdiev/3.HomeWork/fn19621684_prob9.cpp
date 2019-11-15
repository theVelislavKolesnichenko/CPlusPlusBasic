#include <iostream>
#include <string>
using namespace std;
string age(double a);
int main ()
{
	double a;
	cout<<"wywedete wyzrastta:";
	cin>>a;
	cout<<age(a)<<endl;
	return 0;
}
string age(double a)
{
	if(a>0&&a<1)
	{
		return "Baby";
	}
	else if(a>=1&&a<3)
	{
		return "Toddler";
	}
	else if(a>=3&&a<5)
	{
		return "Preschool";
	}
	else if(a>=5&&a<=12)
	{
		return "Gradeschooler"; 
	}
	else if(a>=13&&a<18)
	{
		return "return";
	}
	else if(a>=18&&a<21)
	{
		return "Young Adult";
	}
}