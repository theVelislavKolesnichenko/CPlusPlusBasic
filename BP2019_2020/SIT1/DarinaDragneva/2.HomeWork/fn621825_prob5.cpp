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
    return 2*((a-b)/(b-a));
}
int main()
{
    int a,b;
    a=float_in('a');
    b=float_in('b');
    cout<<"x="<<X(a,b)<<endl;
    return 0;
}

