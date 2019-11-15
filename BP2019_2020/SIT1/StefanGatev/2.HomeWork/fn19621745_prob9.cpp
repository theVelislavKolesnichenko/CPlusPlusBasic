#include <iostream>
using namespace std;
struct Triangle {
	float a, b, c;
};
Triangle input();
float perimetyr(Triangle A);

int main() {
	Triangle A = input();
	cout << "perimetyr=" << perimetyr(A) << endl;
    return 0;
}

Triangle input() {
	Triangle A;
	cout << "a=";
	cin >> A.a;
	cout << "b=";
	cin >> A.b;
	cout << "c=";
	cin >> A.c;
	return A;
}

float perimetyr(Triangle A) {
	return (A.a + A.b + A.c);
}
