#include <iostream>
#include <math.h>

using std::cin;
using std::cout;

int main()
{
    int a, c, y;
    cout << "a= ";
    cin >> a;
    cout << "c= ";
    cin >> c;
    
    y = sqrt((a + 2) - c*2 );

    cout << "y= " << y << std::endl;

    return 0;
}