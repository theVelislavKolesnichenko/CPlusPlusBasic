#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int exOne(int num);
int exTens(int num);
int exHun(int num);

int main() {
	SetConsoleOutputCP(1251);
	int num = 837;
	cout << "Число: "<<num << endl;
	cout << "Стотици: " << exHun(num) << endl;
	cout << "Десетици:" << exTens(num) << endl;
	cout << "Единици: " << exOne(num) << endl;
	
	return 0;
}
int exOne(int num) {
	return num % 10;
}
int exTens(int num) {
	return num/10 % 10;
}
int exHun(int num) {
	return num / 100;
}
