#include <iostream>

using namespace std;

// LCM - least common multiple
int findLCM (int a, int b);
// GCD - greatest common divisor
int findGCD (int a, int b);

int main() {
    int a, b;

    cout << "a = " << endl;
    cin >> a;

    cout << "b = " << endl;
    cin >> b;

    cout << "The LCM of " << a << " and " << b << " is " << findLCM(a, b) << endl;
    cout << "The GCD of " << a << " and " << b << " is " << findGCD(a, b);

    return 0;
}

int findLCM (int a, int b) {
    int lcm;

    if (a > b) {
        lcm = a;
    } else {
        lcm = b;
    }

    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            return lcm;
        }

        lcm++;
    }
}

int findGCD (int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    } else if (a == b) {
        return a;
    } else if (a > b) {
        return findGCD(a-b, b);
    } else {
        return findGCD(a, b-a);
    }
}