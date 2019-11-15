#include <iostream>
#include <conio.h>
using namespace std;

int units(int x);
int tens(int x);
int hundreds(int x);

int main()
{
    int x=837;
    int a,b,c;

    a = units(x);
    cout<<a<<endl;
    b = tens(x);
    cout<<b<<endl;
    c = hundreds(x);
    cout<<c<<endl;
    return 0;
}
int units(int x)
{
    return x%10;
}
int tens(int x)
{
    return x/10%10;
}
int hundreds(int x)
{
    return x/100%10;
}
