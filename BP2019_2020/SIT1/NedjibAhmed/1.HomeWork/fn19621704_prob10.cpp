#include <iostream>

using std::cin;
using std::cout;

#define AREA(a, b) (a*b)
#define PER(a, b) (2*a + 2*b)

int main()
{
    int a, b;
    
    cout << "What is the width of the rectangle? ";
    cin >> a;
    cout << "What is the height of the rectangle? ";
    cin >> b;
    
    cout << "The area of the triangle is " << AREA(a, b) << std::endl;
    cout << "The perimeter of the rectangle is " << PER(a, b) << std::endl;

    return 0;

}