#include <iostream>
#include <math.h>
using namespace std;
void kv(double a,double b,double c);
  
		int main()
{
    double a,b,c;
    cout<<"Vuvedi chislo za a=";
    cin>>a;
    cout<<"Vuvedi chislo za b=";
    cin>>b;
    cout<<"Vuvedi chislo za c=";
    cin>>c;
    kv(a,b,c);
	system("pause");}
  void kv(double a,double b,double c){
         double d,x1,x2;
         d=pow(b,2)+4*a*c;
         cout<<"D:"<<d<<endl;
         if (d<0)
         cout<<"Nqma reshenie !!! "<<endl;
         else
         if (d==0)
         cout<<"x1=x2=0 !";
         else{
         x1=(-b+sqrt(d))/(2*a);
         cout<<"x1="<<x1<<endl;
         x2=(-b-sqrt(d))/(2*a);
		 cout<<"x2="<<x2<<endl;}}