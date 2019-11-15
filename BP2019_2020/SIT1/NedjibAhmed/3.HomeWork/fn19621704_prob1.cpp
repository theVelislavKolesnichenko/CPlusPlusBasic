#include <iostream>

using std::cin;
using std::cout;

int number(int a);

int main()
{
    int a, b;
    cout << "a = ";
    a = number(a);
    cout << "b = ";
    b = number (b);
    cout << "~a = " << (a = ~a) <<std::endl; 
    cout << "a&b = " << (a&b) << std::endl;
    cout << "a|b = " << (a|b) << std::endl;
    cout << "a^b = " << (a^b) <<std::endl;
    cout << "a<<  = " << (a << 5) <<std::endl;
    cout << "a>> " << (a >> 4) <<std::endl;

    return 0;
    
}
int number(int a)
{
    int x;
    cin >> x;
    return x;
}