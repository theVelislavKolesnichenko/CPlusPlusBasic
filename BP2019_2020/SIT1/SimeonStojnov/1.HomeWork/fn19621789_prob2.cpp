#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    float average;

    // The user inserts value for A
    cout << "A = ";
    cin >> a;

    // The user inserts value for B
    cout << "B = ";
    cin >> b;

    // The user inserts value for C
    cout << "C = ";
    cin >> c;

    average = (a + b + c) / 3;
    cout << "The average of A, B and C is equal to " << average << endl;

    return 0;
}