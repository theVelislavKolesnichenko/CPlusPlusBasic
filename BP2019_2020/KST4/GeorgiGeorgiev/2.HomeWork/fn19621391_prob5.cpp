#include <iostream>

using namespace std;

double doubleIn(char);
double equation(double, double);
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

int main()
{
    double a, b;
    a = doubleIn('a');
    b = doubleIn('b');

    printf("Result: %f", equation(a, b));

    return 0;
}

double doubleIn(char ch) {
    double f;
    printf("ch %c: ", ch);
    cin >> f;
    return f;
}

double equation(double a, double b) {
    double result = mul(2, div(sub(a, b), sub(b, a)));
    return result;
}

double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mul(double x, double y) {
    return x * y;
}

double div(double x, double y) {
    return x / y;
}
