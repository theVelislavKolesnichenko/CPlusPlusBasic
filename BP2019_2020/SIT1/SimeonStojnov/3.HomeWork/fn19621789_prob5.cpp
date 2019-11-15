#include <iostream>
#include <math.h>

using namespace std;

float calcX (double y);

int main() {
    double y;

    cout << "y = ";
    cin >> y;

    // За да няма нужда от else if в calcX ф-ята.
    if (y == 0) {
        cout << "We don't really want y to be equal to 0." << endl;

        return 0;
    }

    cout << calcX(y) << endl;

    return 0;
}

float calcX (double y) {
    float x;

    if (y < 1) {
        x = pow(y, 3) + (pow(y, 4) + 2*y);
    } else {
        x = 2 * (2*y + 5) / (14 - y/3);
    }

    cout << "X = " << x << endl;

    return 0;
}