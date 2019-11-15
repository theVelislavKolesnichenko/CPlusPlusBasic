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
 float uravnenie(float y)
 {
     return 2*(2*y+5)/(14-y/3);
 }

  int main()
  {
      float y;
      cout<<"y="; cin>>y;
      cout<<"x="<<uravnenie(y)<<endl;
      return 0;
  }

