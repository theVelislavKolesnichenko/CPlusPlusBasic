#include <iostream>
#include <iomanip>

using namespace std;

void drawPartOne ();
void drawPartTwo ();
void drawPartThree ();

int main() {
    drawPartOne();
    drawPartTwo();
    drawPartThree();

    return 0;
}

void drawPartOne () {
    cout << "A)" << endl;

    for (int i = 5; i > 0; i--) {
        cout << string(i, '%') << endl;
    }
}

void drawPartTwo () {
    cout << "B)" << endl;

    int rows = 5, firstHalf, secondHalf, i = 0;

    firstHalf = rows / 2 + 1;
    secondHalf = rows - firstHalf;

    while (i <= firstHalf) {
        cout << string(i, '%') << endl;
        i++;
    }

    i = secondHalf;

    while (i >= 0) {
        cout << string(i, '%') << endl;
        i--;
    }
}

void drawPartThree () {
    cout << "C)" << endl;

    int i = 5;

    do {
        cout << setw(5) << right << string(i, '%') << setw(5) << left << string(i, '%') << endl;
        i--;
    } while (i > 0);
}