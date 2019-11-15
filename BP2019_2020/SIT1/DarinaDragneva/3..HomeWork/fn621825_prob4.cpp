#include<iostream>
using namespace std;
int X(float y)
{
    return 20/y;
}
int main()
{
    float y;
    cout<<"y=";
    cin>>y;
    if (y==0)
    {
        cout<<"Ne moje da se razdeli na 0!"<<endl;
    }
    else cout<<"x="<<X(y)<<endl;
    return 0;
}



