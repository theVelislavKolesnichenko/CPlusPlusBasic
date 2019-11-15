#include <iostream>
#include<cmath>
using namespace std;
float float_in(char ch)
{
   float f;
cout<<ch<<"=";
cin>>f;
return f;
}
 float uravnenie(float a, float b)
 {
     return pow((a+b),3)+(pow(a,2)+2*a*b-2*a*b+pow(b,2));
 }

  int main()
  {
      float a,b;
      cout<<"a="; cin>>a;
      cout<<"b="; cin>>b;
      cout<<"x="<<uravnenie(a,b)<<endl;
      return 0;
  }
