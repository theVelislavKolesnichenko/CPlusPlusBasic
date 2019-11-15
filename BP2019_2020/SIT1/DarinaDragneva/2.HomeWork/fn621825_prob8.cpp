#include<iostream>
using namespace std;
const int S=987;
float float_in(char ch)
{
    float f;
    cout<<ch<<"=";
    cin>>f;
    return f;
}
float speed(int t)
{
    return S/t;
}
float time(int V)
{
    return S/V;
}
int main()
{
    int V,t;
    t=float_in('t');
    cout<<"V="<<speed(t)<<endl;
    V=float_in('V');
    cout<<"t="<<time(V)<<endl;
    return 0;
}


