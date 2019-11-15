#include<iostream>
#include<math.h>
using namespace std;
float Y(float a, float c);
int main()
{
    float a,c;
    cout<<"a=";
    cin>>a;
    cout<<"c=";
    cin>>c;
    if (a>0 && c!=0)
    {
        cout<<"y="<<Y(a,c)<<endl;
    }
    else cout<<"Invalid Input"<<endl;
    return 0;
}
float Y(float a, float c)
{
    return sqrt(a+2)-2/c;
}
