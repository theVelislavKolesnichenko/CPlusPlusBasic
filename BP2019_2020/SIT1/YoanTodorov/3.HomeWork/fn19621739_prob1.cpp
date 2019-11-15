#include <iostream>

using namespace std;
int function1(int x);
int main()
{
    int a,b;
    a=function1(a);
    b=function1(b);
    cout<<"~a= "<<(~a)<<endl;
    cout<<"~b= "<<(~b)<<endl;
    cout<<"a&b= "<<(a&b)<<endl;
    cout<<"a|b= "<<(a|b)<<endl;
    cout<<"a^b= "<<(a^b)<<endl;
    cout<<"a<<5= "<<(a<<5)<<endl;
    cout<<"b>>4= "<<(b>>4)<<endl;

}
int function1(int x)
{
    cout<<"Enter an integer: ";
    cin>>x;
    return x;
}
