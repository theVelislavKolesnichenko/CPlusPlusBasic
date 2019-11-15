#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double sum(float x);

int main()
{
    float x;
    cout << "x = ";
    cin >> x;
    cout << "sum = " << sum(x) << std::endl; 

    return 0;
}
double sum(float x)
{
    double n, v, sig;
    sig = 0;
    n = 1;
    v = pow(x, n) + 1.0/2*n + 1;
    while(n <= 20)
    {
        sig = sig + v;
        n++;
    }
    return sig;
}
