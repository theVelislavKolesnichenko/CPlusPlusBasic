#include <iostream>

using namespace std;

void isYearLeapOrNot (int year);

int main() {
    int year;

    cout << "year = " << endl;
    cin >> year;

    if (year < 0) {
        cout << "Invalid input." << endl;

        return 0;
    }

    while (true) {
        isYearLeapOrNot(year);

        cout << "Please try with another year: " << endl;
        cin >> year;

        if (year < 0) {
            cout << "Invalid input." << endl;

            break;
        }
    }

    return 0;
}

void isYearLeapOrNot (int year) {
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
}