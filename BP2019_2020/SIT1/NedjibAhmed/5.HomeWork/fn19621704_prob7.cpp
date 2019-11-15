#include<iostream>

using std::cin;
using std::cout;

bool IsPrime(int a);

int main()
{
    int x;
    cout << "Type a number between 1 and 20 to see if it's prime or not: ";
    cin >> x;

    if(x < 1)
    {
        cout << "Number must be more than 1 or less than 20";
    }
    else if(x > 20)
    {
        cout << "Number must be more than 1 or less than 20";
    }
    else
    {
        if(IsPrime(x))
        {
            cout << x << " is a prime number!";
        }
        else 
        {
            cout << x << " is not a prime number!"; 
        }
    }

    return 0;
}
bool IsPrime(int a)
{
    for(int i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            return false;
        }
        else
        {
            break;
        }
    }
    return true;
}