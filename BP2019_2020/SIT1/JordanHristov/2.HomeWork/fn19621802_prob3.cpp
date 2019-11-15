#include <iostream>
using namespace std;

float chislo(char ch);
float sredno(float a, float b, float c, float d);

int main() {
	float a, b, c, d;
	a = chislo('a');
	b = chislo('b');
	c = chislo('c');
	d = chislo('d');
	cout <<"Sredno aritmetichno na chislata e: "<< sredno(a, b, c, d) << endl;

	return 0;
}
float chislo(char ch) {
	float x;
	cout << ch << "=";
	cin >> x;
	return x;
}
float sredno(float a, float b, float c, float d) {
	return (a + b + c + d) / 4;
}