#include <iostream>
#include <math.h>
using namespace std;
void function1(int a,int c);
int main()
{
    int a,c;
    cout<<"a: ";cin>>a;
    cout<<"c: ";cin>>c;
    function1(a,c);
    return 0;
}
void function1(int a,int c)
{
    if(a<=-2&&c==0)
    {
        cout<<"Invalid Input"<<endl;

    }
    else
    {
        cout<<"y= "<<((sqrt(a+2))-(2/c))<<endl;
    }

}
