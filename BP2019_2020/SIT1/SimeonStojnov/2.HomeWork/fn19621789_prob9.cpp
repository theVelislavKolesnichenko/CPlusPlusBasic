#include <iostream>

using namespace std;

struct defineTriangle {
    float a, b, c;
};

float calcP (defineTriangle abc);
defineTriangle createTriangle();

int main() {
    defineTriangle abc;

    abc = createTriangle();

    cout << "Периметърът на триъгълника (P) = " << calcP(abc);

    return 0;
}

defineTriangle createTriangle() {
    defineTriangle abc;

    cout << "Въведете страната a: " << endl;
    cin >> abc.a;

    cout << "Въведете страната b: " << endl;
    cin >> abc.b;

    cout << "Въведете страната b: " << endl;
    cin >> abc.c;

    return abc;
}

float calcP (defineTriangle abc) {
    return abc.a + abc.b + abc.c;
}