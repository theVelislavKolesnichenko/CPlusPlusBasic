#include <iostream>

using namespace std;

int main() {
    int a(576);

    cout << "Units " << a % 10 << " Tens " << (a / 10) % 10 << " Hundreds " << (a / 100) % 10;

    return 0;
}