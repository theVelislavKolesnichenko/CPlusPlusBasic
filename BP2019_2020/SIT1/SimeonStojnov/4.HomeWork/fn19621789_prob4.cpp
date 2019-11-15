#include <iostream>
#include <math.h>

using namespace std;

double findX1 (int a, int b, int d, double D);
double findX2 (int a, int b, int d, double D);

int main() {
    int a, b, d;
    double D;

    cout << "a = " << endl;
    cin >> a;

    cout << "b = " << endl;
    cin >> b;

    cout << "d = " << endl;
    cin >> d;

    // a2 + 2ba + d = 0
    D = pow(2, 2) - 4 * d;

    if (D <= 0) {
        cout << "D can't be equal or less than zero." << endl;
        return 0;
    }

    cout << "D = " << D << endl;

    cout << "x1 = " << findX1(a, b, d, D) << endl;
    cout << "x2 = " << findX2(a, b, d, D) << endl;

    return 0;
}

double findX1 (int a, int b, int d, double D) {
    return (-b - sqrt(D)) / 2;
}

double findX2 (int a, int b, int d, double D) {
    return (-b - sqrt(D)) / 2;
}