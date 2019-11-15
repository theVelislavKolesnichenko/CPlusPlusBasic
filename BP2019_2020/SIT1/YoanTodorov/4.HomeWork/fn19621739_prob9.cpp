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
        cout<<"Enter a year: ";cin>>i;
        if(((i%4==0)&&(i%100!=0))||(i%400==0))
        {
            cout<<"Godinata e visokosna"<<endl;
        }
        else
        {
            cout<<"Godinata ne e visokosna"<<endl;
        }
    }
}
