#include <iostream>

using std::cin;
using std::cout;

void check(int a);

int main()
{
    int x;
    cout << "x = ";
    cin >> x;
    check(x);

    return 0;
}
void check(int a)
{   
    if (a > 0)
    {
        cout << "positive" << std::endl;
    }
    else
    {
        cout << "negative" << std::endl;
    }
    
}