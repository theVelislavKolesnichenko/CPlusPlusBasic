#include <iostream>
#include <math.h>

using namespace std;

double calcV (int x, int n);

double sum;

int main() {
    int x;

    cout << "x = " << endl;
    cin >> x;

    for (int n = 1; n <= 20; n++) {
        calcV(x, n);
    }

    cout << "The sum of the row is " << sum << endl;

    return 0;
}

double calcV (int x, int n) {
    double v;

    v = (pow(x, n) + (0.5*n) + 1);

    sum += v;

    return v;
}