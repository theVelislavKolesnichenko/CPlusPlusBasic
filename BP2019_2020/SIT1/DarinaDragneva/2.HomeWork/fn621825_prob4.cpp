#include<iostream>
#include<math.h>
using namespace std;
float units(int a)
{
    return a%10;
}
float tens(int a)
{
    return a/10%10;
}
float hundreds(int a)
{
    return a/100%10;
}

int main()
{
    const int a=837;
    cout<<"Units="<<units(a)<<endl;
    cout<<"Tens="<<tens(a)<<endl;
    cout<<"Hundreds="<<hundreds(a)<<endl;
    return 0;
}
