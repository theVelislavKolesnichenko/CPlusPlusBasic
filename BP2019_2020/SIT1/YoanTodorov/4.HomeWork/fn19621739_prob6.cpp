#include <iostream>
#include <math.h>
using namespace std;

void fun1();
void fun2();
void fun3();
int main()
{
    fun1();
    fun2();
    fun3();
    return 0;
}


void fun1()
{
    int x;
    cout<<"x: ";cin>>x;
    while(x>0)
    {
        for(int i=1;i<=x;i++)
        {
            cout<<"%";
        }
    cout<<endl;
    x--;
    }
}

void fun2()
{
    int y;
    cout<<"y: ";cin>>y;
    int a=1;
    while(a<=y)
    {
        for(int i=1;i<=a;i++)
        {
            cout<<"%";
        }
    cout<<endl;
    a++;
    }
    while(y>0)
    {
        for(int i=1;i<y;i++)
        {
            cout<<"%";
        }
    cout<<endl;
    y--;
    }
}

void fun3()
{
    int z;
    int a=0;
    cout<<"z: ";cin>>z;
    while(z>0)
    {
        for(int i=1;i<=a;i++)
            {
                cout<<" ";
            }
            a++;
        for(int i=1;i<=z;i++)
        {


        cout<<"%";

        }
    cout<<endl;
    z--;
    z--;
    }
}


