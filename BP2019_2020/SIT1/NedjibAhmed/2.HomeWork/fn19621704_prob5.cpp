#include <iostream>

using std::cout;
using std::cin;

float float_in(char ch);
float formula(float a, float b);

int main()
{
    float a, b;
    a = float_in('a');
    b = float_in('b');

    cout << "2*((a - b)/(b - a)) = " << formula(a, b) << std::endl;

    return 0;   
}

float float_in(char ch)
{
    float f;
    cout << ch << " = ";
    cin >> f;
    return f;
}

float formula(float a, float b)
{
    return 2*((a - b)/(b - a));
}