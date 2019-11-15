#include <iostream>
#include <math.h>

using namespace std;

float solveEquation(float a, float c);

int main() {
    float a, c;

    cout << "a = " << endl;
    cin >> a;

    cout << "c = " << endl;
    cin >> c;

    if ((a + 2) <= 0 || c == 0) {
        cout << "Invalid input." << endl;

        return 0;
    }

    cout << "Y = " << solveEquation(a, c) << endl;

    return 0;
}

float solveEquation(float a, float c) {
    float y;

    y = sqrt(a + 2) - 2 / c;

    return y;
}