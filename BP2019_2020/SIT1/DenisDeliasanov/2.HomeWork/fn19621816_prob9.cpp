#include <iostream>
#include<cmath>
using namespace std;
struct triangle
{
    float a,b,c;
};
triangle triangl_input();
float input(char symb);
float p_calc(triangle val);
int main()
{
    triangle a;
    a=triangl_input();
    cout<<"P="<<p_calc(a);
}
   float input(char symb)
   {
       float val;
       cout<<"a="; cin>>a;
       cout<<"b="; cin>>b;
       cout<<"c="; cin>>c;
        return P;

   }
