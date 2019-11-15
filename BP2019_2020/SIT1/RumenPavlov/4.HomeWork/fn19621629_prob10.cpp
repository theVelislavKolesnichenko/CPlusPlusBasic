#include <iostream>
#include <math.h>
using namespace std;
void f1(int x);
int main()
{
	int x;
	cout<<"Въведете число"<<endl;
	cin>>x;
    f1(x);



return 0;
}
void f1(int x)
{
float p;
for(int n=1; n<=20; n++)
{
p=(pow(x,n)+1/2*n+1);
}
cout<<p<<endl;
}