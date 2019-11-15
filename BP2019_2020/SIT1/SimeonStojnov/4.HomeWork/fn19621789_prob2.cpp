#include <iostream>

using namespace std;

void decideSeason (int monthNum);

int main() {
    int monthNum;

    cout << "Enter a number for the month of the year: " << endl;
    cin >> monthNum;

    if (monthNum < 1 || monthNum > 12) {
        cout << "There is no month equal to the inserted number." << endl;

        return 0;
    }

    decideSeason(monthNum);

    return 0;
}

void decideSeason (int monthNum) {
    if (monthNum <= 2 || monthNum == 12) {
        cout << "The season is winter.";
    } else if (monthNum >= 3 && monthNum < 6) {
        cout << "The season is spring.";
    } else if (monthNum >= 6 && monthNum < 9) {
        cout << "The season is summer.";
    } else {
        cout << "The season is autumn.";
    }
}