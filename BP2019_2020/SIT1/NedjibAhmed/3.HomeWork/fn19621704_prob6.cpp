#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

void formulas1(float y);

int main()
{
    float y;
    cout << "Enter a number that is y >= 58 and y <= 87 or y > 15 and y < 58\ny = ";
    cin >> y;
    formulas1(y);

    return 0;
}
void formulas1(float y)
{
    if ((y >= 58) && (y <= 87))
    {
        cout << "x = " << pow(y, 3) + (pow (y, 4) + 2*y) << std::endl;
    }
    else if ((y > 15) && (y < 58))
    {
        cout << "x = " << 2*(2*y + 5) / (14 - y/3) << std::endl;
    }
    else
    {
        cout << "The number y must be y >= 58 and y <= 87 or y > 15 and y < 58." << std::endl;
    }
    
}