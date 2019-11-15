#include <iostream>

using std::cin;
using std::cout;

#define AREA(a, h) (a*h/2) 

int main()
{
    int a, h;
    
    cout << "What is the base of the triangle? ";
    cin >> a;
    cout << "What is the height of the triangle? ";
    cin >> h;
    
    cout << "The area of the triangle is " << AREA(a, h) << std::endl;

    return 0;

}