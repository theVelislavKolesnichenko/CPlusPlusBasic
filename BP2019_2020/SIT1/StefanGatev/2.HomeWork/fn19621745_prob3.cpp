#include <iostream>
using namespace std;
float input(char a);
float sredno(float a, float b, float c, float d);

int main() {
	float a = input('a');
	float b = input('b');
	float c = input('c');
	float d = input('d');
	cout << "sredno=" << sredno(a, b, c, d) << endl;
    return 0;
}

float input(char a) {
	float n;
	cout << a << "=";
	cin >> n;
	return n;
}

float sredno(float a, float b, float c, float d) {
	return ((a + b + c + d) / 4);
}