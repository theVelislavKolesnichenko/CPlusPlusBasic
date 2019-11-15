#include<iostream>
using namespace std;
float NOK(float a, float b);
float NOD(float a, float b);
int main()
{
    float a,b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"NOK="<<NOK(a,b)<<endl;
    cout<<"NOD="<<NOD(a,b)<<endl;
    return 0;
}
float NOK(float a, float b)
{
    float c=a,r=b;
    while (c!=r)
    {
        if (c>r)
        {
            r+=b;
        }
        else c+=a;
   }
    return c;
}
float NOD(float a, float b)
{
    return (a*b)/NOK(a,b);
}
