#include <iostream>
#include <math.h>

using namespace std;

float enterNumber (float var);
double calcX (double a, double b);

int main() {
    double a, b, var;

    a = enterNumber(var);
    b = enterNumber(var);

    calcX(a, b);

    return 0;
}

float enterNumber (float var) {
    cout << "Enter a number... \n";
    cin >> var;

    cout << "The number you have entered is " << var << endl;

    return var;
}

double calcX (double a, double b) {
    double x;

    x = pow(a+b, 3) + (pow(a, 2) + 2*b*a - 2*a*b + pow(b, 2));

    cout << "Given the equation x = (a+b)³ + (a² + 2ba – 2ab + b²), then x = " << x;

    return x;
}