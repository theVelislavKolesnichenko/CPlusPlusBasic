#include <iostream>
using namespace std;
double function1(double x);
int main()
{
    double x;
    cout<<"Enter a number: ";cin>>x;
    function1(x);
    return 0;
}

double function1(double x)
{
    if(x>0)
    {
        cout<<"Positive";
    }
    else if(x<0)
    {
        cout<<"Negative";
    }
    else if(x==0)
    {
        cout<<"The number is 0";
    }
}
