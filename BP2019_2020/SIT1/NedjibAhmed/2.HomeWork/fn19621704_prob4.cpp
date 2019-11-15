#include <iostream>

using std::cout;
using std::cin;

int units(int a);
int tens(int a);
int huns(int a);

int main()
{
    int x, u, t, h;
    cout << "x = ";
    cin >> x;
    u = units(x);
    t = tens(x);
    h = huns(x);

    cout << "Units = " << u << " Tens = " << t << " Hundreds = " << h << std::endl;

    return 0;
}

int units(int a)
{
    return a % 10;
}

int tens(int a)
{
    return a / 10 % 10;
}

int huns(int a)
{
    return a / 100 % 10;
}