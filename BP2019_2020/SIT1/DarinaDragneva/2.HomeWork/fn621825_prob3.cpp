#include<iostream>
#include<math.h>
using namespace std;
float float_in(char ch)
{
    float f;
    cout<<ch<<"=";
    cin>>f;
    return f;
}
float sredna_stoinost(int a, int b, int c, int d)
{
    return (float)(a+b+c+d)/4;
}
int main()
{
    int a,b,c,d;
    a=float_in('a');
    b=float_in('b');
    c=float_in('c');
    d=float_in('d');
    cout<<"Srednata stoinost="<<sredna_stoinost(a,b,c,d)<<endl;
    return 0;
}
