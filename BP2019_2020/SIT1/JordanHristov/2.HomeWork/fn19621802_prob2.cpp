v#include <iostream>
using namespace std;


float chislo(char ch);
float sum(float a, float b);
float razl(float a, float b);
float po(float a, float b);
float del(float a, float b);
int main() {
	float a, b;
	a = chislo('a');
	b = chislo('b');
	cout << sum(a, b) << endl;
	cout << razl(a, b) << endl;
	cout << po(a, b) << endl;
	cout << del(a, b) << endl;
	return 0;
}
float chislo(char ch) {
	float x;
	cout << ch << "=";
	cin >> x;
	return x;

}
float sum(float a, float b) {
	return a + b;
}
float razl(float a, float b) {
	return a - b;
}
float po(float a, float b) {
	return a * b;
}
float del(float a, float b) {
	return a / b;
}
