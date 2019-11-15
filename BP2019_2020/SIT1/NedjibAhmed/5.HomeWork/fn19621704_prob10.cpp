#include<iostream>

using std::cin;
using std::cout;

void mult(int *sum, int a, int b);

int main()
{
    int a, b, sum, *p = &a;
    sum = 0;

    cout << "Input two numbers\n" << "a = ";
    cin >> a;
    do
    {
        cout << "The second number must be grater than the first\n" << "b = ";
        cin >> b;

    } while (b < a);

    cout << "mul before: " << sum << std::endl;
    mult(&sum, a, b);
    cout << "mul after: " << sum << std::endl;
}
void mult(int *sum, int a, int b)
{
    (*sum) = a + b;
}