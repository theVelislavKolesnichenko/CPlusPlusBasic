#include <iostream>

using namespace std;

float enterNumber (float var);
float calcAverage (float a, float b, float c, float d);

int main() {
    float a, b, c, d, var;

    a = enterNumber(var);
    b = enterNumber(var);
    c = enterNumber(var);
    d = enterNumber(var);

    calcAverage(a, b, c, d);

    return 0;
}

float enterNumber (float var) {
    cout << "Enter a number... \n";
    cin >> var;

    cout << "The number you have entered is " << var << endl;

    return var;
}

float calcAverage (float a, float b, float c, float d) {
    cout << "The average of the four numbers is " << (a + b + c + d) / 4;
    return (a + b + c + d) / 4;
}