#include <iostream>
#include <math.h>
using namespace std;
float f1(float a, float c);
int main()
{
	float a, c;
	cout<<"Въведете 2 числа"<<endl;
	cin>>a;
	cin>>c;
	while(a+2<0)
	{
	cout<<"Invalid input"<<endl;
	cout<<"a+2<0"<<endl;
	cin>>a;
	};
    while(c==0)
	{
    cout<<"Invalid input"<<endl;
	cout<<"На 0 не се дели"<<endl;
	cin>>c;
	};
	f1(a,c);

return 0;
}
float f1(float a, float c)
{
float y;
y=sqrt(a+2)-2*c;
cout<<"sqrt(a+2)-2c= "<<y<<endl;
return y;
}