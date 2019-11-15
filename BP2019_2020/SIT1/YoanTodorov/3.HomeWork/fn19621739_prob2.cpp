#include <iostream>
using namespace std;

double MAX(double x,double y);
int main()
{
    double x,y;
    cout << "Enter a number: ";cin>>x;
    cout << "Enter a number: ";cin>>y;
   MAX(x,y);
    return 0;
}
double MAX(double x,double y)
{
    if(x>y)
    {
        cout<<"The bigger number is: "<<x;
    }
    else if(x<y)
    {
        cout<<"The bigger number is: "<<y;
    }
    else if(x=y)
    {
        cout<<"The numbers are equal";
    }
}
