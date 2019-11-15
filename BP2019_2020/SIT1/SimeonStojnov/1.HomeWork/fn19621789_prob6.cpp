#include <iostream>

using namespace std;

int main() {
    float a, b, c, z;

    // The user inserts value for A
    cout << "A = ";
    cin >> a;

    // The user inserts value for B
    cout << "B = ";
    cin >> b;

    // The user inserts value for C
    cout << "C = ";
    cin >> c;

    z = 2 * (a - b) * (a - c);
    cout << "Z = " << z;

    return 0;
}