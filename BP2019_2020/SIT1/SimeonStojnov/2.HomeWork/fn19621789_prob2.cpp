#include <iostream>

using namespace std;

float numberOutput (float var);
float sumTwoNumbers (float a, float b);
float subtractTwoNumbers (float a, float b);
float multiplyTwoNumbers (float a, float b);
float divideTwoNumbers (float a, float b);

int main() {
    float a, b, var;

    numberOutput(var);

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "a + b = " << sumTwoNumbers(a, b) << endl;
    cout << "a - b = " << subtractTwoNumbers(a, b) << endl;
    cout << "a * b = " << multiplyTwoNumbers(a, b) << endl;
    cout << "a / b = " << divideTwoNumbers(a, b) << endl;

    return 0;
}

float numberOutput (float var) {
    cout << "Enter a number... \n";
    cin >> var;

    cout << "The number you have entered is " << var << endl;

    return var;
}

float sumTwoNumbers (float a, float b) {
    return a + b;
}

float subtractTwoNumbers (float a, float b) {
    return a - b;
}

float multiplyTwoNumbers (float a, float b) {
    return a * b;
}

float divideTwoNumbers (float a, float b) {
    return a / b;
}