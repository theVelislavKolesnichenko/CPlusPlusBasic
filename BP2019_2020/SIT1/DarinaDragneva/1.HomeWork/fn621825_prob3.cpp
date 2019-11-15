#include <iostream>
using namespace std;
int main()
{
    const int a=576;
    cout<<"Units"<<" "<<a%10<<" ";
    cout<<"Tens"<<" "<<a/10%10<<" ";
    cout<<"Hundreds"<<" "<<a/100%10<<" ";
    return 0;
}

