#include <iostream>

using std::cout;
using std::cin;

void season(int a);

int main()
{
    int a;
    cout << "Type a month's number to see what season it is" << std::endl;
    cin >> a;
    season(a);

    return 0;

}
void season(int a)
{
    if ( (a >= 1) && (a <= 2) || (a == 12) )
    {
        cout << "It's Winter!" << std::endl;
    }
    else if ((a >= 3) && (a <= 5))
    {
        cout << "It's Spring!" << std::endl;
    }
    else if ((a >= 6) && (a <= 8))
    {
        cout << "It's Summer!" << std::endl;
    }
    else if ((a >= 9) && (a <= 11))
    {
        cout << "It's Fall!" << std::endl;
    }
    else
    {
        cout << "This is not a valid month number" << std::endl;
    } 
}