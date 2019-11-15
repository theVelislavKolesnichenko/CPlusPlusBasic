#include <iostream>

using std::cout;
using std::cin;

int digits(int x);

int main()
{
    int x, y;
    
    cout << "Enter a number to see if it's four-digit.\n";
    cout << "Press 0 if you want to end the program.\n";

    while (x != 0)
    {
        cin >> x;
        y = digits(x);
        if (y == 4)
        {
            cout << "four-digit\n";
        }
        else if (y > 4)
        {
            cout << "more than four-digit\n";
        }
        else
        {
            cout << "less than four-digit\n";
        }
        
    }
    return 0;
}
int digits(int x)
{
    int dig = 0;
    while (x != 0)
    {
        x /= 10;
        dig++;
    }
    return dig;
}

