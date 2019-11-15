#include<iostream>
using namespace std;
void Year(int yr);
int main()
{
    int yr;
    do
    {
        cout<<"Vuvedete godina: ";
        cin>>yr;
        Year(yr);
    }
    while(yr>0);
    return 0;
}
void Year(int yr)
{
    if(yr%4==0) cout<<"Visokosna";
    else cout<<"Ne e visokosna";
    cout<<endl;
}

