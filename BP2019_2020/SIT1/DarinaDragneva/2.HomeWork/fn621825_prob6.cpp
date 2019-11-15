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
float X(float a, float b)
{
    return pow((a+b),3)+(pow(a,2)+2*b*a-2*a*b+pow(b,2));
}
int main()
{
    int a,b;
    a=float_in('a');
    b=float_in('b');
    cout<<"x="<<X(a,b)<<endl;
    return 0;
}


