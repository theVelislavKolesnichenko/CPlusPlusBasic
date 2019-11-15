#include <iostream>

using namespace std;

int main() {
    float x, y;

    // The user inserts value for Y
    cout << "Y = ";
    cin >> y;

    x = (2 * y + 5) / (14 - y / 3);
    cout << "X = " << x;

    return 0;
}