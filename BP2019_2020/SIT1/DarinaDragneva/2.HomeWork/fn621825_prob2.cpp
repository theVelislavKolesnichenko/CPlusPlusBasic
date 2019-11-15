#include<iostream>
using namespace std;
float float_in(char ch)
{
    float f;
    cout<<ch<<"=";
    cin>>f;
    return f;
}
float addition(float a, float b)
{
    return a+b;
}
float subtraction(float a, float b)
{
    return a-b;
}
float multiplication(float a, float b)
{
    return a*b;
}
float division(float a, float b)
{
    return a/b;
}
int main()
{
    float a,b;
    a=float_in('a');
    b=float_in('b');
    cout<<"a+b="<<addition(a,b)<<endl;
    a=float_in('a');
    b=float_in('b');
    cout<<"a-b="<<subtraction(a,b)<<endl;
    a=float_in('a');
    b=float_in('b');
    cout<<"a*b="<<multiplication(a,b)<<endl;
    a=float_in('a');
    b=float_in('b');
    cout<<"a/b="<<division(a,b)<<endl;
    return 0;
}
