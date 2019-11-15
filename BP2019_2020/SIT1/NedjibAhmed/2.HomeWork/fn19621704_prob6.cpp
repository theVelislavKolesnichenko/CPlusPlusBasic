#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

float float_in(char ch);
float formula1(float a, float b);

int main()
{
    float a, b;
    a = float_in('a');
    b = float_in('b');

    cout << "pow((a + b), 3) + (pow(a, 2) + 2*b*a - 2*a*b + pow(b, 2)) = " << formula1(a, b) << std::endl;

    return 0;   
}

float float_in(char ch)
{
    float f;
    cout << ch << " = ";
    cin >> f;
    return f;
}

float formula1(float a, float b)
{
    return pow((a + b), 3) + (pow(a, 2) + 2*b*a - 2*a*b + pow(b, 2));
}