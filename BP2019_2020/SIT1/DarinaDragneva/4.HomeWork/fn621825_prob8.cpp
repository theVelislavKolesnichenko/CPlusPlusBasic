#include<iostream>
using namespace std;
void Four_digit(float number);
int main()
{
    float number;
    do
    {
        cout<<"Vuvedete chislo: ";
        cin>>number;
        Four_digit(number);
        cout<<endl;
    }
    while(number!=0);
    return 0;
}
void Four_digit(float number)
{
    if(number<1000)
    {
        cout<<"less four-digit";
    }
    if(number>999 && number<10000)
    {
        cout<<"four-digit";
    }
    if(number>9999)
    {
        cout<<"more four-digit";
    }
}

