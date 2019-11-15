#include <iostream>
using namespace std;
	struct pravoygylnik{
	double a,b;
};
	double S(pravoygylnik a);
int main()
{
	pravoygylnik a;
	cout<<"a=";
	cin>>a.a;
	cout<<"b=";
	cin>>a.b;
	cout<<"Liceto na pravoygylnik S="<<S(a)<<endl;
}

double S(pravoygylnik a)
{
	return a.a*a.b;
}

