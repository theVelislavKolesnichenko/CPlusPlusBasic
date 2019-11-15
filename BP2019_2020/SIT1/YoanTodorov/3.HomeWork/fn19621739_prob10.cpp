#include <iostream>
#include <math.h>
using namespace std;

int Number(int x);
int main()
{
    int x;
    cout<<"Enter a number: ";cin>>x;
    Number(x);
    return 0;
}

int Number(int x)
{
    if(x%2==0)
    {
        cout<<"Even";
    }
    else if(x%2!=0)
    {
        cout<<"Odd";
    }
}

