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
float X(float y)
{
    return (2*(2*y+5))/(14-y/3);
}
int main()
{
    int y;
    y=float_in('y');
    cout<<"x="<<X(y)<<endl;
    return 0;
}



