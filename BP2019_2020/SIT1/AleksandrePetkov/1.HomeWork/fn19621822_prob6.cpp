#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    int z = 2 * (a-b) * (a-c);
    cout<<"z = " << z << endl;
}