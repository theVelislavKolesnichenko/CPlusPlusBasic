#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b;//а=6,b=2
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	float c = a / b;//c=3
	float d = (float)a / b;//d=3
	cout << "c= " << c << endl;
	cout << "d= " << d << endl;
	system("pause");
	return 0;
	/*c)    на а) и на б) променливите c и d са равни на 3 тъй като резултатът
	от деление на целите числа а и b е целочислено число и дори те да са от тип
	float пак ще изглейдат като целочислени*/
}