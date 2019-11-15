#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number:" << endl;
    cin >> x;
    if ( x % 2 == 0)
        cout << x << " Even " ;
    else
        cout << x << " Odd ";
    return 0;
}
