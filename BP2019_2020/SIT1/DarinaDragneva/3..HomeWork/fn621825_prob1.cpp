#include<iostream>
using namespace std;
int int_in(char ch)
{
    float f;
    cout<<"Vuvedete cqlo chislo "<<ch<<"=";
    cin>>f;
    return int(f);
}
int main()
{
    int a,b;
    a=int_in('a');
    b=int_in('b');
    cout<<(~a)<<endl;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(a<<5)<<endl;
    cout<<(b>>4)<<endl;
    return 0;
}

