#include<iostream>
using namespace std;
void Odd_or_even(int number)
{
    if(number%2==0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
}
int main()
{
    int number;
    cout<<"Vuvedete chislo: ";
    cin>>number;
    Odd_or_even(number);
    return 0;
}


