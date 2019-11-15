#include <iostream>
using namespace std;
int main()
{
    int A,B;
    float C,D;
    cout<<"A=";
    cin>>A;
    cout<<"B=";
    cin>>B;
    C=A/B;
    cout<<"C="<<C<<endl;
    D=(float(A))/B;
    cout<<"D="<<D<<endl;
    return 0;
}
