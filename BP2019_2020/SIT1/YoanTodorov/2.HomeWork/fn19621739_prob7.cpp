#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float float_in(char ch);
float fun1(float y,float x);


int main()
{
float y,x;
y=float_in('y');


cout<<"result: "<<fun1(y,x)<<endl;

return 0;
}

float float_in(char ch)
{
    float z;
    cout << ch <<"=";
    cin >>z;
    return z;
}
float fun1(float y,float x)
{
    x=2*(2*y+5)/(14-y/3);
return x;
}

