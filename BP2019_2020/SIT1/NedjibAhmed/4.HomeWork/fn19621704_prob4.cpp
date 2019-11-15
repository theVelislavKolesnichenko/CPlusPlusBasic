#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

void quad_eq(int a, int b, int d);

int main()
{
    int a, b, d;
    cout << "Enter three numbers to get the unknowns of the quadratic equation a*x^2 + 2bx + d = 0."<<std::endl;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "d= ";
    cin >> d;

    quad_eq(a, b, d);

    return 0;
}
void quad_eq(int a, int b, int d)
{
    float x, x1, x2, det;
    
    det = pow(2*b, 2) - 4*a*d;
    x = -2*b/2*a;
    x1 = (-2*b + sqrt(det))/2*a;
    x2 = (-2*b - sqrt(det))/2*a;

    if (det == 0)
    {
        cout << "x= " << x << std::endl;
    }
    else if (det > 0)
    {
        cout << "x1= " << x1 << " x2= " << x2 << std::endl;
    }
    else
    {
        cout << "The equation doesn't have an answer" << std::endl;
    }
    
}
