#include <iostream>

using namespace std;
float sum3(float a, float b, float c); // имена започващи с цифра са нелегални
int main()
{
	float a=0,b=0,c=0;
	cout<<"Enter three numbers"<<endl;
	sum3(a,b,c);




return 0;
}
float sum3(float a, float b, float c)
{
	float sum;
	do
	{
	cin>>a>>b>>c;
	sum=a+b+c;
	cout<<"Their sum is: "<<sum<<endl;	
	}while(a!=0 && b!=0 || a!=0 && c!=0 || b!=0 && c!=0);


return sum;
}
