#include <iostream>

using namespace std;

float calcX (float y);

int main() {
    float y;

    cout << "y = ";
    cin >> y;

    if (y == 0) {
        cout << "You can't divide with 0." << endl;

        return 0;
    }

    cout << calcX(y) << endl;

    return 0;
}

float calcX (float y) {
    float x;

    x = 20 / y;

    cout << "X = " << x << endl;

    return 0;
}