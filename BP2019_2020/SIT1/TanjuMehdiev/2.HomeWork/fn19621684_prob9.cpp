#include <iostream>
using namespace std;
	struct triygylnik{
	int a,b,c;
};
	double P(triygylnik a);
int main()
{
	triygylnik a;
	cout<<"a=";
	cin>>a.a;
	cout<<"b=";
	cin>>a.b;
	cout<<"c=";
	cin>>a.c;
	cout<<"Obikolkata na triygylnika P="<<P(a)<<endl;
}

double P(triygylnik a)
{
	return a.a+a.b+a.c;
}




	