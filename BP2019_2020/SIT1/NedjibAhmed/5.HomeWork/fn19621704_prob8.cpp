#include<iostream>

using std::cin;
using std::cout;

void output(int *x);

int main()
{
    int a = 0;
    
    cout << "Before the function a is " << a << std::endl;

    output(&a);

    cout << "After function a is " << a;

}
void output(int *x)
{
    cout << "a = ";
    cin >> (*x);
}