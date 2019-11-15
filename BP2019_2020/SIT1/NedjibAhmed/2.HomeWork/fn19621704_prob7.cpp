#include <iostream>

using std::cout;
using std::cin;

float float_in(char ch);
float formula2(float y);

int main()
{
    float y;
    y = float_in('y');

    cout << "2*(2*y + 5)/(14 - y/3) = " << formula2(y) << std::endl;

    return 0;   
}

float float_in(char ch)
{
    float f;
    cout << ch << " = ";
    cin >> f;
    return f;
}

float formula2(float y)
{
    return 2*(2*y + 5)/(14 - y/3);
}