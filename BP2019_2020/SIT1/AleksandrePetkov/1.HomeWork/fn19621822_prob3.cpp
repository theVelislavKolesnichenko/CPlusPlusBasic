#include <iostream>
using namespace std;
int main(){
    int N = 576;

    cout<<"Units " << (N%10);
    N /= 10;
    cout<<" Tens " << (N%10);
    N /= 10;
    cout<<" Hundreds " << (N%10) << endl;
}