#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b,c;
    double z;
    cout<<"Vuvedi a=";
    cin>>a;
    cout<<"Vuvedi b=";
    cin>>b;
    cout<<"Vuvedi c=";
    cin>>c;
    z=2*(a-b)*(a-c);
    cout<<"z="<<z<<endl;
    return 0;
}
