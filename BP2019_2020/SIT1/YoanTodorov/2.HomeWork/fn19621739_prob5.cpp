#include <iostream>
#include <conio.h>
using namespace std;

float float_in(char ch);
float fun1(float a,float b);


int main()
{
float a,b;
a=float_in('a');
b=float_in('b');

cout <<"2((a-b)/(b-a))="<<fun1(a,b)<<endl;

return 0;
}

float float_in(char ch)
{
    float y;
    cout << ch <<"=";
    cin >>y;
    return y;
}
float fun1(float a,float b)
{
return 2*((a-b)/(b-a));
}

