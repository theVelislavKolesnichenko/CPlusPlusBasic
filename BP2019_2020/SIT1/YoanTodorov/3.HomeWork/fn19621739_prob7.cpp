#include <iostream>
#include <math.h>
using namespace std;

double fun1(double y);
int main()
{
    double y;
    cout<<"y: ";cin>>y;
    fun1(y);
    return 0;
}
double fun1(double y)
{
    if(y<=-5)
    {
        cout<<pow(y,3)+(y*4+2*y);
    }
    else if(y>5)
    {
        if(14-y/3==0)
        {
           cout<<"Uravnenieto nqma reshenie";
        }
        else
        {
            cout<<2*(2*y+5)/(14-y/3);
        }
    }
    else
    {
        cout<<"Vavedete chislo v intervala [-oo;-5] ili (5;+oo)";
    }
}

