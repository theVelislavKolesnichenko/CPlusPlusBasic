#include <iostream>

using namespace std;

float enterNumber (float var);
double calcX (double y);

int main() {
    double y, var;

    y = enterNumber(var);

    calcX(y);

    return 0;
}

float enterNumber (float var) {
    cout << "Enter a number... \n";
    cin >> var;

    cout << "The number you have entered is " << var << endl;

    return var;
}

double calcX (double y) {
    double x;

    x = 2 * (2*y + 5) / (14 - y/3);

    cout << "Given the equation x = 2(2y + 5)/(14 – y/3), then x = " << x;

    return x;
}