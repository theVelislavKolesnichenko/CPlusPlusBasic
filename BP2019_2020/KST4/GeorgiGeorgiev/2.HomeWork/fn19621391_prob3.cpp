#include <iostream>

using namespace std;

int inputInt(char);
double getAverage(int, int, int, int);

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    a = inputInt('a');
    b = inputInt('b');
    c = inputInt('c');
    d = inputInt('d');

    printf("Average: %f\n", getAverage(a, b, c ,d));
    return 0;
}

int inputInt(char ch) {

    int x;
    printf("ch %c: ", ch);
    cin >> x;
    return x;
}

double getAverage(int a, int b, int c, int d) {
    return double(a + b + c + d) / 4;
}
