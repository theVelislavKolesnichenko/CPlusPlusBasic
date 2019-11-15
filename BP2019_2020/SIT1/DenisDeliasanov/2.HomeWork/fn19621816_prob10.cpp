#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
struct rectriangle
{
    float a,b;
};
rectriangle rectriangl_input();
float input(char symb);
float S_calc(rectriangle val);
int main()
{
    rectriangle a;
    a=rectriangl_input();
    cout<<"S="<<S_calc(a);
}
   float input(char symb)
   {
       float val;
       cout<<"a="; cin>>a;
       cout<<"b="; cin>>b;
        return S;

   }
