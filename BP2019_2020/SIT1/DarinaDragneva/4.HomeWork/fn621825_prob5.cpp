#include<iostream>
using namespace std;
void Number(int real_number);
int main()
{
    int real_number=0;
    cout<<"Vuvedete cqlo polojitelno chislo: ";
    cin>>real_number;
    cout<<"Chislata sa: "<<endl;
    Number(real_number);
    return 0;
}
void Number(int real_number)
{
    if (real_number>0)
    {
        for(int i=1;i<=real_number;i++)
        {
            cout<<i<<endl;
        }
    }
    else cout<<"Invalid"<<endl;
}
