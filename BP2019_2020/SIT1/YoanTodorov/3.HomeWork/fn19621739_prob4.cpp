#include <iostream>
#include <iomanip>
using namespace std;
double fun1(double y);
int main()
{
    double y;
    cout<<"y: ";cin>>y;
    fun1(y);

    return 0;
}
double fun1(double y)
{
    if(y==0)
    {
        cout<<"Ne mozhe da se deli na 0";
    }
    else
    {

        cout<<"20/" <<y<<"= "<< 20/y;
    }
}
