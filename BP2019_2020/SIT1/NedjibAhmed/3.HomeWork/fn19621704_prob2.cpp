#include <iostream>

using std::cin;
using std::cout;

int MAX(int x, int y);

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "MAX(" << a <<  "," << b << ")=" << MAX(a, b) <<std::endl;

    return 0;

}
int MAX(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
 

}