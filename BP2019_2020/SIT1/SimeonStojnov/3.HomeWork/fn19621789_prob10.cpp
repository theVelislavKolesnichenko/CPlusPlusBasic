#include <iostream>

using namespace std;

short checkIfOddOrEven (int tmp);

int main() {
    int a;

    cout << "Enter a number... \n";
    cin >> a;

    checkIfOddOrEven(a);

    return 0;
}

short checkIfOddOrEven (int tmp) {
    if ( tmp % 2 == 0) {
        cout << tmp << " is even.";
    } else {
        cout << tmp << " is odd.";
    }

    return 0;
}