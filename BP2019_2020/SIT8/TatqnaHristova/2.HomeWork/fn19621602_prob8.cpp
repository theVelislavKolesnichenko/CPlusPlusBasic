#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

const float c = 987;
float skorVlak(float a);
float vremeVlak(float b);

int main() 
{ 
	SetConsoleOutputCP(1251);
	float a, b;
	cout << "Време за пътуване: ";
	cin >> b;
	cout << "Скоростта е: " << vremeVlak(b) << endl;
	
	
	cout << "Въведете скорост на влака: ";
	cin >> a;
	cout << "Времето за пътуване е:" << skorVlak(a) << endl;
	
	
	return 0;
}
float skorVlak(float a) {
	return c / a;
}
float vremeVlak(float b) {
	return c / b;
}

