#include <iostream>

using namespace std;

float enterNumber (float var);
float calcX (float a, float b);

int main() {
    float a, b, var;

    a = enterNumber(var);
    b = enterNumber(var);

    calcX(a, b);

    return 0;
}

float enterNumber (float var) {
    cout << "Enter a number... \n";
    cin >> var;

    cout << "The number you have entered is " << var << endl;

    return var;
}

float calcX (float a, float b) {
    float x;

    x = ((a - b) / (b - a));

    cout << "Given the equation x = 2((a−b)/(b−a)), then x = " << x;

    // The output should always be -1
    return x;
}