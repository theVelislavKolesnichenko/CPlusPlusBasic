#include <iostream>

using std::cout;
using std::cin;

float float_in(char ch);
float four_avg(float a, float b, float c, float d);

int main()
{
    float a, b, c, d;
    a = float_in('a');
    b = float_in('b');
    c = float_in('c');
    d = float_in('d');

    cout << "The average of a, b, c, d is " << four_avg(a, b, c, d) << std::endl;

    return 0;
}

float float_in(char ch)
{
    float f;
    cout << ch << "= ";
    cin >> f;
    return f;
}

float four_avg(float a, float b, float c, float d)
{
    return (a + b + c + d) / 4;
}