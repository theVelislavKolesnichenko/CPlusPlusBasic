#include <iostream>
using namespace std;
float Sum(float a, float b , float c);

int main() {
	float a, b, c;
	
		do {
			cout << "Въведете a = " ;
			cin >> a;
			cout << "Въведете b = " ;
			cin >> b;
			cout << "Въведете c = " ;
			cin >> c;
			cout << "Сумата на 3-те числа е: " << Sum(a, b, c)<<endl;
		} while ((a != 0 && b != 0) || (b != 0 && c != 0) || (a != 0 && c != 0));
		

	return 0;
}

float Sum(float a, float b, float c) {
	float n;
	n = a + b + c;
	return n;
}