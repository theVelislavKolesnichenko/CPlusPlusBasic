#include<iostream>
using namespace std;
void Age(int years)
{
    if(years>0 && years<1)
    {
        cout<<"Baby"<<endl;
    }
    if(years>=1 && years<3)
    {
        cout<<"Todler"<<endl;
    }
    if(years>=3 && years<5)
    {
        cout<<"Preschool"<<endl;
    }
    if(years>=5 && years<=12)
    {
        cout<<"Gradeschooler"<<endl;
    }
    if(years>=13 && years<18)
    {
        cout<<"Teen"<<endl;
    }
    if(years>=18 && years<21)
    {
        cout<<"Young adult"<<endl;
    }
}
int main()
{
    int years;
    cout<<"Vuvedete godini: ";
    cin>>years;
    Age(years);
    return 0;
}





