#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float float_in(char ch);
float fun1(float a,float b,float x);


int main()
{
float a,b,x;
a=float_in('a');
b=float_in('b');

cout<<"result: "<<fun1(a,b,x)<<endl;

return 0;
}

float float_in(char ch)
{
    float y;
    cout << ch <<"=";
    cin >>y;
    return y;
}
float fun1(float a,float b,float x)
{
    x=pow(a+b,3)+(pow(a,2)+2*b*a-2*a*b+pow(b,2));
return x;
}

