	#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c;
	double d;
	cout<<"Vuvedi a:";
	cin>>a;
	cout<<"Vuvedi b:";
	cin>>b;
	cout<<"Vuvedi c:";
	cin>>c;
	d = (a + b + c) / 3.0;
	cout<<setprecision(3)<< "Sredna stoinost :"<<d<<endl;

	return 0;

}
