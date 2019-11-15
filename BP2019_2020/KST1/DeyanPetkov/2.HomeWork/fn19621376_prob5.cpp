#include <iostream>

using namespace std;
void fun1(double a, double b)
{
    double x;
    x=2*((a-b)/(b-a));
    cout<<x;
}
int main()
{
    double ch1,ch2;
    cout<<"Vavedi dve chisla";
    cin>>ch1>>ch2;
    cout<<endl<<"Rezultatut e:";
    fun1(ch1,ch2);
    return 0;
}
