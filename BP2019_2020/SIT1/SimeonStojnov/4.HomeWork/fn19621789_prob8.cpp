#include <iostream>

using namespace std;

int countDigit (int a);
void displayMessage (int a);

int main() {
    int a;

    cout << "a = " << endl;
    cin >> a;

    while (a != 0) {
        displayMessage(a);

        cout << "insert another number for a = " << endl;
        cin >> a;

        if (a == 0) {
            break;
        }
    }

    return 0;
}

int countDigit (int a) {
    int count = 0;
    while (a != 0) {
        a = a / 10;
        ++count;
    }

    return count;
}

void displayMessage (int a) {
    if (countDigit(a) == 4) {
        cout << "four-digit" << endl;
    } else if (countDigit(a) > 4) {
        cout << "more four-digit" << endl;
    } else {
        cout << "less four-digit" << endl;
    }
}