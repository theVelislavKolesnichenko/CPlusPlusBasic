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
float skorost(float S, float t)
{
    return  S/t;
}
int main()
{
  float S,t;
  S=float_in('S');
  t=float_in('t');
  cout<<"V="<<skorost(S,t)<<endl;
  return 0;






}
