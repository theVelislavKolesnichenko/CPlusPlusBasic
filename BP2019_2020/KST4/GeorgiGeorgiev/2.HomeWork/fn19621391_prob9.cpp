#include <iostream>

using namespace std;

struct Triangle {
    double sideA, sideB, sideC;
};

Triangle newTriangle();
double getPerimeter(Triangle);

int main()
{
    Triangle tri1 = newTriangle();

    printf("Perimeter: %.2f\n", getPerimeter(tri1));

    return 0;
}

Triangle newTriangle() {
    Triangle x;
    printf("Side A: ");
    scanf_s("%lf", &x.sideA);
    printf("Side B: ");
    scanf_s("%lf", &x.sideB);
    printf("Side C: ");
    scanf_s("%lf", &x.sideC);

    return x;
}

double getPerimeter(Triangle x) {
    return x.sideA + x.sideB + x.sideC;
}
