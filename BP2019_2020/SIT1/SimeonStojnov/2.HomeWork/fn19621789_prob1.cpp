#include <iostream>

using namespace std;

void start ();
void final ();

int main() {
    start();

    cout << "\n Press enter to continue...";
    getchar();

    final();

    return 0;
}

void start () {
    cout << "Start ?";
}

void final () {
    cout << "Final !";
}