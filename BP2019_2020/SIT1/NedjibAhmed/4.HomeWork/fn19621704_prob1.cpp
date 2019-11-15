#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

void formula(float a, float c);

int main()
{
    float a, c;
    cout << "a = ";
    cin >> a;
    cout << "c = ";
    cin >> c;
    formula(a, c);

    return 0;

}
void formula(float a, float c)
{
    if (a < 0)
    {
        cout << "You can't put a negative number under the square root." << std::endl;
    }
    else if (c == 0)
    {
        cout << "You can't divide by zero." << std::endl;
    }
    else 
    {
        cout << "y = " << sqrt((a + 2)) - 2/c << std::endl;
    }
}