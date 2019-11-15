#include <iostream>
#include <math.h>
using namespace std;

void fun1(int x);
int main()
{
    double x;
    cout<<"x: ";cin>>x;
    fun1(x);
    return 0;
}
void fun1(int x)
{
    for(int i=1;i<=x;i++)
    {
        cout<<i<<endl;
    }
}

