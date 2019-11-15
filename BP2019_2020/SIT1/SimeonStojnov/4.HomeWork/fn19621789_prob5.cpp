#include <iostream>

using namespace std;

void findAllNumberUntilParam (int a);

int main() {
    int a;

    cout << "a = " << endl;
    cin >> a;

    findAllNumberUntilParam(a);

    return 0;
}

void findAllNumberUntilParam (int a) {
    for (int i = 1; i < a; i++) {
        cout << i << endl;
    }
}