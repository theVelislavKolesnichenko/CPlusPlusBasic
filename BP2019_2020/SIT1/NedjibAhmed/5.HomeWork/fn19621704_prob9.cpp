#include<iostream>

using std::cin;
using std::cout;

void mult(int *mul, int a, int b);

int main()
{
    int a, b, mul, *p = &a;
    mul = 0;

    cout << "Input two numbers\n" << "a = ";
    cin >> a;
    do
    {
        cout << "The second number must be grater than the first\n" << "b = ";
        cin >> b;

    } while (b < a);

    cout << "mul before: " << mul << std::endl;
    mult(&mul, a, b);
    cout << "mul after: " << mul << std::endl;
}
void mult(int *mul, int a, int b)
{
    (*mul) = a * b;
}