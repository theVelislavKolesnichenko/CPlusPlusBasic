#include <iostream>

using std::cin;
using std::cout;

void div(float y);

int main()
{
    float y;
    cout << "y = ";
    cin >> y;
    div(y);

    return 0;
}
void div(float y)
{
    if (y == 0)
    {
        cout << "You can't divide by 0." << std::endl;
    }
    else 
    {
        cout << "x = 20/y = " <<  20/y << std::endl;
    }
}