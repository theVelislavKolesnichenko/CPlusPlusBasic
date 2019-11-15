#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

void formulas(float y);

int main()
{
    float y;
    cout << "y = ";
    cin >> y;
    formulas(y);

    return 0;
}
void formulas(float y)
{
    if (y < 1)
    {
        cout << "x = " << pow(y, 3) + (pow (y, 4) + 2*y) << std::endl;
    }
    else 
    {
        cout << "x = " << 2*(2*y + 5) / (14 - y/3) << std::endl;
    }
}