#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

void formulas1(float y);

int main()
{
    float y;
    cout << "Enter a number that is y <= -5 or y > 5\ny = ";
    cin >> y;
    formulas1(y);
    
    return 0;
}
void formulas1(float y)
{
    if (y <= -5)
    {
        cout << "x = " << pow(y, 3) + (pow (y, 4) + 2*y) << std::endl;
    }
    else if (y > 5) 
    {
        cout << "x = " << 2*(2*y + 5) / (14 - y/3) << std::endl;
    }
    else
    {
        cout << "The number must be y <= -5 or y > 5." << std::endl;
    }
    
}