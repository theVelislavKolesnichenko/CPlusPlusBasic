#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, c, y;
    cout << "a="; cin >> a;
    cout << "c="; cin >> c;

    y = sqrt(a+2)-2*c;
    cout << "y=" << y;
    return 0;
}
