#include <iostream>
using namespace std;
float float_in(char ch);
float arythmetic1(float a, float b);
float arythmetic2(float c, float e);
float arythmetic3(float f, float g);
float arythmetic4(float h, float i);
int main()
{
	cout << "2 + 5 =" << arythmetic1(2, 5) << endl;
	cout << "1.2 - 7 =" << arythmetic2(1.2, 7) << endl;
	cout << "10.3 / 2 =" << arythmetic3(10.3, 2) << endl;
	cout << "11 * 3.6 =" << arythmetic4(11, 3.6) << endl;
	system("pause");
	return 0;
}
float float_in(char ch)
{
	float d;
	cout << ch << "=";
	cin >> d;
	return d;
}
float arythmetic1(float a, float b) {
	return a + b;
}
float arythmetic2(float c, float e) {
	return c - e;
}
float arythmetic3(float f, float g) {
	return f / g;
}
float arythmetic4(float h, float i) {
	return h * i;
}