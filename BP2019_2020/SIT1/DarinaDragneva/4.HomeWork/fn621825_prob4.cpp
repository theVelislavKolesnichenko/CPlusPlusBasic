#include<iostream>
#include<math.h>
using namespace std;
void Equation(float a, float b, float d);
float float_in(char ch);
int main()
{
    float a,b,d;
    a=float_in('a');
    b=float_in('b');
    d=float_in('d');
    cout<<"korenite sa=";
    Equation(a,b,d);
    return 0;
}
void Equation(float a, float b, float d)
{
    float D;
    D=4*pow(b,2)-4*d;
    if (D<0)
    {
        cout<<"Nqma reshenie"<<endl;
    }
    if (D==0)
    {
        cout<<(-2*b)/2<<endl;
    }
    if (D>0)
    {
        cout<<((-2*b)+sqrt(D))/2<<" i "<<((-2*b)-sqrt(D))/2<<endl;
    }
}
float float_in(char ch)
{
    float f;
    cout<<ch<<"=";
    cin>>f;
    return f;
}
