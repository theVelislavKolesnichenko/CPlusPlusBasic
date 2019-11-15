#include <iostream>
#include <math.h>
using namespace std;

void fun1();
int main()
{
    fun1();
    return 0;
}

void fun1()
{
    int n=1;
    int x;
    cout<<"x: ";cin>>x;
    int v;
    v=0;
    while(n<=20)
    {

        v=v+(pow(x,n)+1/(2*n)+1);
        n++;

    }
    cout<<"v= "<<v<<endl;
}

