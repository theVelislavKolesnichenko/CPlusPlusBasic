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
 float subirane(float a, float b)
 {
     return a+b;
 }
 float izvajdane(float a, float b)
 {
     return a-b;
 }
 float umnojenie(float a, float b)
 {
     return a*b;
 }
 float delenie(float a, float b)
 {
     return a/b;
 }
  int main()
  {
      float a,b;
      a=float_in('a');
      b=float_in('b');
      cout<<"a+b="<<subirane(a,b)<<endl;
      a=float_in('a');
      b=float_in('b');
      cout<<"a-b="<<izvajdane(a,b)<<endl;
      a=float_in('a');
      b=float_in('b');
      cout<<"a*b="<<umnojenie(a,b)<<endl;
      a=float_in('a');
      b=float_in('b');
      cout<<"a/b="<<delenie(a,b)<<endl;
      return 0;
  }



