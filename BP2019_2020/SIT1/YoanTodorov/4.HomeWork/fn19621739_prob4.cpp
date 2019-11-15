#include <iostream>
#include <math.h>
using namespace std;
void fun1(int a,int b,int c);
int main()
{
    int a,b,c;
    cout<<"a: ";cin>>a;
    cout<<"b: ";cin>>b;
    cout<<"c: ";cin>>c;
    fun1(a,b,c);

    return 0;
}
void fun1(int a,int b, int c)
{
    int x1,x2,D;

    D=b*b-4*a*c;
    if(a==0)
    {
        cout<<"Uravnenieto ne e kvadratno ";

    }
    else
    {
        if(D==0)
        {
            x1=-b/(2*a);
            cout<<"x= "<<x1<<endl;
        }
        else if(D>0)
        {
            cout<<"x1= "<<((-b+sqrt(D))/(2*a))<<endl;
            cout<<"x2= "<<((-b-sqrt(D))/(2*a))<<endl;
        }
        else if(D<0)
        {
            cout<<"Uravnenieto nqma realni koreni"<<endl;
        }
    }


}
