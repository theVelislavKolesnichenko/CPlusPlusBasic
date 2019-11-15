#include<iostream>
using namespace std;
int Number(char symbol)
{
    int isym=int(symbol);
    if (isym>64 && isym<91)
    {
        isym=isym-64;
    }
    else
        if (isym>96 && isym<123)
        {
            isym=isym-96;
        }
    return isym;
}
int main()
{
    char symbol;
    cout<<"Vuvedete bukva: ";
    cin>>symbol;
    if (Number(symbol)>27)
    {
        cout<<"Nekorekten vhod"<<endl;
    }
    else cout<<symbol<<"-"<<Number(symbol);
    return 0;
}


