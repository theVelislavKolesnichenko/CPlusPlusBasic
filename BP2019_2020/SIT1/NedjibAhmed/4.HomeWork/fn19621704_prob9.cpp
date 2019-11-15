#include <iostream>

using std::cout;
using std::cin;

void leap_or_not(int year);

int main()
{
    int year;
    cout << "Enter a year to see if it's leap or not.\n";
    cout << "Input a negative number to end program\n";

    while(year >= 0)
    {
        cin >> year;
        if (year > 0)
        {
            leap_or_not(year);
        }
    }   
    return 0;
}
void leap_or_not(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        cout << year << " is a leap year!\n"; 
    }
    else
    {
        cout << year << " is not a leap year!\n";
    }
    
}
