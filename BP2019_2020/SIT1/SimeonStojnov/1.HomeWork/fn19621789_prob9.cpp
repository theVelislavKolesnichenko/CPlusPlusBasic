#include <iostream>

using namespace std;

int main() {
    float c, hc, S;

    // The user inserts value for c
    cout << "c = ";
    cin >> c;

    // The user inserts value for hc
    cout << "hc = ";
    cin >> hc;

    S = (c * hc) / 2;
    cout << "S = " << S;

    return 0;
}