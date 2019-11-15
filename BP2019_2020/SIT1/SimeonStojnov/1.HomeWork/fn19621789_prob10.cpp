#include <iostream>

using namespace std;

int main() {
    float a, b, P, S;

    // The user inserts value for a
    cout << "a = ";
    cin >> a;

    // The user inserts value for b
    cout << "b = ";
    cin >> b;

    P = 2 * a + 2 * b;
    cout << "P = " << P << endl;

    S = a * b;
    cout << "S = " << S;

    return 0;
}