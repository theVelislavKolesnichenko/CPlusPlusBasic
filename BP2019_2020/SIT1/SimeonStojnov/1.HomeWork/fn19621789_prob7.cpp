#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, c, y;

    // The user inserts value for A
    cout << "A = ";
    cin >> a;

    // The user inserts value for C
    cout << "C = ";
    cin >> c;

    y = sqrt((a + 2) - c * 2);
    cout << "Y = " << y;

    return 0;
}