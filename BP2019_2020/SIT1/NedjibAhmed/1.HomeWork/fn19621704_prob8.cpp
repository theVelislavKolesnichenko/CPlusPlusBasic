#include <iostream>
#include <math.h>

using std::cin;
using std::cout;

int main()
{
    int y, x;
    cout << "y= ";
    cin >> y;
    
    x = (2*y + 5) * (14 - y/3);

    cout << "x= " << x << std::endl;

    return 0;
}