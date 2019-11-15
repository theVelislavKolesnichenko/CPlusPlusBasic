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
float srstoinost(float a, float b, float c, float d)
{
    return (a+b+c+d)/4;
}
int main()
{
  float a,b,c,d;
  a=float_in('a');
  b=float_in('b');
  c=float_in('c');
  d=float_in('d');
  cout<<"(a+b+c+d)/4="<<srstoinost(a,b,c,d)<<endl;
  return 0;






}
