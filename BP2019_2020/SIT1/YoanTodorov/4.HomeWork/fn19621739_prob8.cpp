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
    int i;
    while(i!=0)
    {
        cout<<"Enter a number: ";cin>>i;
        if((i>999&&i<10000)||(i<-999&&i>-10000))
        {
            cout<<"four-digit"<<endl;
        }
        else if((i<999&&i>0)||(i>-999&&i<0))
        {
            cout<<"less four-digit"<<endl;
        }
        else if(i>10000||i<-10000)
        {
            cout<<"more four-digit"<<endl;
        }
    }
}

