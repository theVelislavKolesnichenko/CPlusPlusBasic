#include <iostream>

using namespace std;

void checkNumber (float a);

int positiveCount = 0;
int negativeCount = 0;

int main() {
    float a, b, c, d, e, f, g, h, i, j;

    cout << "a = " << endl;
    cin >> a;
    cout << "b = " << endl;
    cin >> b;
    cout << "c = " << endl;
    cin >> c;
    cout << "d = " << endl;
    cin >> d;
    cout << "e = " << endl;
    cin >> e;
    cout << "f = " << endl;
    cin >> f;
    cout << "g = " << endl;
    cin >> g;
    cout << "h = " << endl;
    cin >> h;
    cout << "i = " << endl;
    cin >> i;
    cout << "j = " << endl;
    cin >> j;

    checkNumber(a);
    checkNumber(b);
    checkNumber(c);
    checkNumber(d);
    checkNumber(e);
    checkNumber(f);
    checkNumber(g);
    checkNumber(h);
    checkNumber(i);
    checkNumber(j);

    cout << "The amount of inserted negative numbers is " << negativeCount << endl;
    cout << "The amount of inserted positive numbers is " << positiveCount << endl;

    return 0;
}

void checkNumber (float a) {
    if (a < 0) {
        negativeCount++;
    } else if (a > 0) {
        positiveCount++;
    }
}