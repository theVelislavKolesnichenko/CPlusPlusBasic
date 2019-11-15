#include<iostream>
using namespace std;
void positive_or_negative(float a)
{
    if (a>0)
    {
        cout<<"positive"<<endl;
    }
    if (a<0)
    {
        cout<<"negative"<<endl;
    }
    if (a==0)
    {
        cout<<"invalid"<<endl;
    }
}
int main()
{
    float a;
    cout<<"a=";
    cin>>a;
    positive_or_negative(a);
    return 0;
}


