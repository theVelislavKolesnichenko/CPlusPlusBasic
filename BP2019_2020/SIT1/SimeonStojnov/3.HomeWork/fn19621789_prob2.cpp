#include <iostream>

using namespace std;

int max (int a, int b);

int main() {
    int a, b;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << max(a, b) << endl;

    return 0;
}

int max (int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}