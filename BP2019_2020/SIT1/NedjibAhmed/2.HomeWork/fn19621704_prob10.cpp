#include <iostream> 

using std::cout;
using std::cin;

struct rectangle{
    float a, b;
};

rectangle rectangle_in();
float area(rectangle ABCD);

int main()
{
    rectangle ABCD;
    cout << "The sides of rectangle ABCD are: " << std::endl;
    ABCD = rectangle_in();
    cout << "The area of the rectangle ABCD is " << area(ABCD) << std::endl;

    return 0;
}

rectangle rectangle_in()
{
    rectangle ABCD;
    cout << "a = ";
    cin >> ABCD.a;
    cout << "b = ";
    cin >> ABCD.b;

    return ABCD;
}

float area(rectangle ABC)
{
    return ABC.a * ABC.b;
}