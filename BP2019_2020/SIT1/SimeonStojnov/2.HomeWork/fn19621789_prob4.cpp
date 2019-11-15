#include <iostream>

using namespace std;

int outputUnits (int number);
int outputTens (int number);
int outputHundreds (int number);

int main() {
    int defaultInt(837);

    cout << "The units of 837 are " << outputUnits(defaultInt) << endl;
    cout << "The tens of 837 are " << outputTens(defaultInt) << endl;
    cout << "The hundreds of 837 are " << outputHundreds(defaultInt) << endl;

    return 0;
}

int outputUnits (int number) {
    return number % 10;
}

int outputTens (int number) {
    return (number / 10) % 10;
}

int outputHundreds (int number) {
    return number / 10 / 10;
}