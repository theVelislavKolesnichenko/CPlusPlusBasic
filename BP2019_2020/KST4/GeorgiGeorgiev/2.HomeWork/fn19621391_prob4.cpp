#include <iostream>

using namespace std;

int getUnits(int);
int getTens(int);
int getHundreds(int);

int main()
{
    int number = 837;

    printf("Number: %d\n"
           "Units: %d\n"
           "Tens: %d\n"
           "Hundreds: %d\n",
           number, getUnits(number), getTens(number), getHundreds(number));

    return 0;
}

int getUnits(int x) {
    return x % 10;
}

int getTens(int x) {
    return (x / 10) % 10;
}
int getHundreds(int x) {
    return (x / 100) % 10;
}
