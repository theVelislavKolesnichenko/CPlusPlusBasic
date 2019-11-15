#include <iostream>
#include <conio.h>
using namespace std;

float float_in(char ch);
float sum(float a,float b);
float sub(float c,float d);
float div(float e,float f);
float mul(float g,float h);

int main()
{
float a,b,c,d,e,f,g,h;
a=float_in('a');
b=float_in('b');
cout <<a<<"+"<<b<<"="<< sum(a,b)<<endl;
c=float_in('c');
d=float_in('d');
cout <<c<<"-"<<d<<"="<< sub(c,d)<<endl;
e=float_in('e');
f=float_in('f');
cout <<e<<"/"<<f<<"="<< div(e,f)<<endl;
g=float_in('g');
h=float_in('h');
cout <<g<<"*"<<h<<"="<< mul(g,h)<<endl;

return 0;
}

float float_in(char ch)
{
    float y;
    cout << ch <<"=";
    cin >>y;
    return y;
}
float sum(float a,float b)
{
return a+b;
}
float sub(float c,float d)
{
return c-d;
}
float div(float e,float f)
{
return e/f;
}
float mul(float g,float h)
{
return g*h;
}
