#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int a, b;
	float c, d;
	cout<<"Enter A and B:"<<endl;
	cin>>a;
	cin>>b;
	c=a/b;
	cout<<fixed<<setprecision(2)<<c<<endl; 
	d=float(a)/b;
	cout<<fixed<<setprecision(2)<<d<<endl; /* Данните от типа int въведени "а" и "b" неявно се преобразуват след като се изчислява "с",
	, който е от типа float. След като в променливата "d" "a" се преобразува явно няма загуба на данни.*/








	return 0;
}
