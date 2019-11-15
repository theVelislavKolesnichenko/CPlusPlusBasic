#include <iostream>

using namespace std;

int enterInt (int tmp);

int main() {
    int a, b;

    a = enterInt(a);
    b = enterInt(b);

    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a&b);
    printf("a|b = %d\n", a|b);
    printf("a^b = %d\n", a^b);
    printf("a<<5 = %d\n", a<<5);
    printf("a>>4 = %d\n", a>>4);
    printf("b<<5 = %d\n", b<<5);
    printf("b>>4 = %d\n", b>>4);

    return 0;
}

int enterInt (int tmp) {
    cout << "Enter a number... \n";
    cin >> tmp;

    cout << "The number you have entered is " << tmp << "." << endl;

    return tmp;
}