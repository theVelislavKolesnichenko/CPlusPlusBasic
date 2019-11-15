#include <iostream>

using std::cout;
using std::cin;

int digits(long long a);

int main()
{
    long long a;
    int digs;
    
    cout << "Input a number to see how many digits it has.\n" << "a= ";
    cin >> a;
    if(a > -2147483648 && a < 2147483648)
    {
       digs = digits(a);
       cout << "The number " << a << " has " << digs << " digits.\n";
    }
    else
    {
        cout << "Invalid Number";
    }
    

    return 0;
}
int digits(long long a)
{
    int numDig = 0;
    while (a != 0)
    {
        a = a/10;
        numDig++;
    }
    return numDig;
}