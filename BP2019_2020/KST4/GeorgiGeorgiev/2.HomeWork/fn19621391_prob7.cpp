#include <iostream>

using namespace std;

double doubleIn(char);
double equation(double);

int main()
{
    double y;
    y = doubleIn('y');

    printf("Result: %f\n", equation(y));

    return 0;
}

double doubleIn(char ch) {
    double f;
    printf("ch %c: ", ch);
    cin >> f;
    return f;
}

double equation(double y) {
    double result = 2 * (2*y + 5) / (14 - y/3);
    return result;
}
