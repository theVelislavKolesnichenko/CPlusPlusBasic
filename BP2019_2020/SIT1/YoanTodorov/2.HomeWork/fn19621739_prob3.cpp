#include <iostream>
#include <conio.h>
using namespace std;

float float_in(char ch);
float avg(float a,float b,float c,float d);


int main()
{
float a,b,c,d;
a=float_in('a');
b=float_in('b');
c=float_in('c');
d=float_in('d');
cout <<"Average="<<avg(a,b,c,d)<<endl;

return 0;
}

float float_in(char ch)
{
    float y;
    cout << ch <<"=";
    cin >>y;
    return y;
}
float avg(float a,float b,float c,float d)
{
return ((a+b+c+d)/4);
}

