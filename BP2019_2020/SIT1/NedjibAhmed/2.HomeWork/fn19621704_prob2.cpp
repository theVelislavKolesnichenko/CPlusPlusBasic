#include <iostream>

using std::cout;
using std::cin;

float float_in(char ch);
float sum(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float div(float a, float b);

int main()
{
    float a, b;
    a = float_in('a');
    b = float_in('b');
    cout << "a + b = " << sum(a, b) << std::endl;
    cout << "a - b = " << sub(a, b) << std::endl;
    cout << "a * b = " << mult(a, b) << std::endl;
    cout << "a / b = " << div(a, b) << std::endl;

    return 0;

}

float float_in(char ch)
{
    float f;
    cout << ch << "= ";
    cin >> f;
    return f;
}
float sum(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
float mult(float a, float b)
{
    return a * b;
}
float div(float a, float b)
{
    return a / b;
}