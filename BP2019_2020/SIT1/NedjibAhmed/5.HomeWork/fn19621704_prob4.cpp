#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

float calculate(float a);

int main()
{
    float x, y;
    cout << "Enter a number between -100 and 100\n" << "x= ";
    cin >> x;
    if (x > -100 && x < 100)
    {
        cout <<"The y is equal to " << calculate(x) << std::endl;
    }
    else
    {
        cout << "That number is not between -100 and 100\n";
    }
    
    return 0;

}
float calculate(float a)
{
    float y;
    if (a <= 0)
    {
        y = pow(a,3)/4 + 1;
    }
    else
    {
        y = sqrt((a - 4));
    }

    return y;
}