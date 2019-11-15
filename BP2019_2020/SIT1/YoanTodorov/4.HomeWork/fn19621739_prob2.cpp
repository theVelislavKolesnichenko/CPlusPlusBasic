#include <iostream>
using namespace std;

void season(int x);
int main()
{
    double x;
    cout << "Enter month: ";cin>>x;
   season(x);
    return 0;
}
void season(int x)
{
    if(x>=3&&x<6)
    {
        cout<<"The season is Spring "<<endl;
    }
    else if(x>=6&&x<9)
    {
        cout<<"The season is Summer "<<endl;
    }
    else if(x>=9&&x<12)
    {
        cout<<"The season is Autumn "<<endl;
    }
    else if(x==12||(x>=1&&x<3))
    {
        cout<<"The season is Winter "<<endl;
    }
    else
    {
        cout<<"Invalid month"<<endl;
    }
}
