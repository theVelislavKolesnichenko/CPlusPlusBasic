#include <iostream>
#include <math.h>
float float_in(char ch);
float result(float y);
using namespace std;

int main() {

	float y;
	y = float_in('y');
	cout << "x = " << result(y);


	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
float result(float y) {
	if (y < 1) {
		return  pow(y,3) + (pow(y, 4) + 2*y);

	}
	else if(y > 1){
		return 2*(2*y + 5) / (14 - y / 3);
	}
}