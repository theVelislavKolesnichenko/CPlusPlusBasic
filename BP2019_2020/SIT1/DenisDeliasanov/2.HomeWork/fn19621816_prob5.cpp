#include <iostream>
#include<cmath>
#include<cstring>
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
     return 2*((a-b)/(b-a));
 }

  int main()
  {
      float a,b;
      cout<<"a="; cin>>a;
      cout<<"b="; cin>>b;
      cout<<"x="<<uravnenie(a,b)<<endl;
      return 0;
  }
