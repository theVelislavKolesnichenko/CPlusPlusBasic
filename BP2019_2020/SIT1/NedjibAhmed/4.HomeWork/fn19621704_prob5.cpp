#include <iostream>

using std::cout;
using std::cin;

void count_it(int a);

int main()
{
    int x;
    cout << "Enter a number to count up to it: ";
    cin >> x;

    count_it(x);
    cout << x;

    return 0;
}
void count_it(int a)
{
    int i;
    i = 0;

    while (i < a)
    {
        cout << i++ << "\t";
    }
}