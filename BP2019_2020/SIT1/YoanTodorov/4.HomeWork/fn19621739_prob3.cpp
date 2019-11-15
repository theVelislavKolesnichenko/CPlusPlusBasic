#include <iostream>
#include <algorithm>
using namespace std;
void NOK(int x,int y);
void NOD(int x,int y);
int main()
{
    int x,y;
    cout<<"x: ";cin>>x;
    cout<<"y: ";cin>>y;
    NOK(x,y);
    cout<<"x: ";cin>>x;
    cout<<"y: ";cin>>y;
    NOD(x,y);
    return 0;
}

void NOK(int x, int y)
{
    int NOK;
    if(x>y)
    {
        NOK=x;
    }
    else
    {
        NOK=y;
    }
    while(1)
    {
        if(NOK%x==0 && NOK%y==0)
        {
            cout<<"NOK= "<<NOK<<endl;
            break;
        }
        NOK++;
    }
}
void NOD(int x,int y)
{
    int NOD;
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            NOD=i;
        }
    }
    cout<<"NOD= "<<NOD;
}

