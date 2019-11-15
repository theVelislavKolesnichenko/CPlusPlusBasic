#include <iostream> 

using std::cout;
using std::cin;

struct triangle{
    float a, b, c;
};

triangle triangle_in();
float parameter(triangle ABC);

int main()
{
    triangle ABC;
    cout << "The sides of triangle ABC are: " << std::endl;
    ABC = triangle_in();
    cout << "The parameter of the triangle ABC is " << parameter(ABC) << std::endl;

    return 0;
}

triangle triangle_in()
{
    triangle ABC;
    cout << "a = ";
    cin >> ABC.a;
    cout << "b = ";
    cin >> ABC.b;
    cout << "c = ";
    cin >> ABC.c;

    return ABC;
}

float parameter(triangle ABC)
{
    return ABC.a + ABC.b + ABC.c;
}