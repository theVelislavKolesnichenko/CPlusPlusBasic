#include <iostream>

using namespace std;

short outputChildAge (float age);

int main() {
    float age;

    cout << "Age = ";
    cin >> age;

    cout << outputChildAge(age) << endl;

    return 0;
}

short outputChildAge (float age) {
    if (age > 0 && age < 1) {
        cout << "Baby" << endl;
    } else if (age >= 1 && age < 3) {
        cout << "Toddler" << endl;
    } else if (age >= 3 && age < 5) {
        cout << "Preschool" << endl;
    } else if (age >= 5 && age < 12) {
        cout << "Gradeschooler" << endl;
    } else if (age >= 13 && age < 18) {
        cout << "Teen" << endl;
    } else if (age >= 18 && age < 21) {
        cout << "Young Adult" << endl;
    }

    return 0;
}