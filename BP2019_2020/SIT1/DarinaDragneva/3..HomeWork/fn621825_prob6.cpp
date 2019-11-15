#include<iostream>
#include<math.h>
using namespace std;
float X(float y)
{
    if(y>=58 && y<=87)
    {
        return pow(y,3)+((pow(y,4))+2*y);
    }
    if(y>15 && y<58)
    {
        return 2*(2*y+5)/(14-y/3);
    }
}
int main()
{
    float y;
    cout<<"y=";
    cin>>y;
    cout<<"x="<<X(y)<<endl;
    return 0;
}



