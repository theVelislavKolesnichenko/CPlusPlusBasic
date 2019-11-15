#include <iostream>

using std::cin;
using std::cout; 

void un_even(int x);

int main()
{
    int x;
    cout << "Type a whole number to see if it's even or odd: ";
    cin >> x;
    un_even(x);

    return 0;
}
void un_even(int x)
{
    if( x % 2 == 0)
    {
        cout << "Even" << std::endl;
    }
    else 
    {
        cout << "Odd" << std::endl;
    }
}