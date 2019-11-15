#include <iostream>
using namespace std;
int chislo(char x);
double opr(int a,int b);
 int main()
  {
	  cout<<"-- Bitovi operatsii --"<<endl;
    int a,b;
	a=chislo('a');
	b=chislo('b');
	cout<<"Rezultati:"<<endl;
opr(a,b);
system("pause");
 return 0;}
int chislo(char x){
  int vyvedi;
  cout<< "Vuvedi chislo "<<x<<"=";
  cin>>vyvedi;
  return vyvedi ;}
double opr(int a,int b){
cout<<"~a = "<<(~a)<<endl;
cout<<"~b = "<<(~b)<<endl;
cout<<"a&b = "<<(a&b)<<endl;
cout<<"a|b = "<<(a|b)<<endl;
cout<<"a^b = "<<(a^b)<<endl;
cout<<"a<<5 = "<<(a<<5)<<endl;
cout<<"b>>5 = "<<(b<<5)<<endl;
cout<<"a>>4 = "<<(a>>4)<<endl;
cout<<"a>>4 = "<<(b>>4)<<endl;
return 0;

}