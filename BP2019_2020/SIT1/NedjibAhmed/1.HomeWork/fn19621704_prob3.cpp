#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a=576, u, t, h;

    u = a % 10;
    t = a / 10 % 10;
    h = a / 100 % 10;
    
    cout << "Units " << u;
    cout << " Tens " << t;
    cout << " Hundreds " << h;

    return 0;
}