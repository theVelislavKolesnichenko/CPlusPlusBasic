#include <iostream>

using namespace std;

short checkIfIntIsPositive (int a);

int main() {
    int a;

    cout << "a = ";
    cin >> a;

    cout << checkIfIntIsPositive(a) << endl;

    return 0;
}

short checkIfIntIsPositive (int a) {
    if (a > 0) {
        cout << "Positive." << endl;
    } else {
        cout << "Negative." << endl;
    }

    return 0;
}