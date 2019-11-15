#include <iostream>

using namespace std;

struct defineRectangle {
    float a, b;
};

float calcS (defineRectangle ab);
defineRectangle createRectangle();

int main() {
    defineRectangle ab;

    ab = createRectangle();

    cout << "Лицето на правоъгълника (S) = " << calcS(ab);

    return 0;
}

defineRectangle createRectangle() {
    defineRectangle ab;

    cout << "Въведете страната a: " << endl;
    cin >> ab.a;

    cout << "Въведете страната b: " << endl;
    cin >> ab.b;

    return ab;
}

float calcS (defineRectangle ab) {
    return ab.a * ab.b;
}