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
	cout << "����� �� ��������: ";
	cin >> b;
	cout << "��������� �: " << vremeVlak(b) << endl;
	
	
	cout << "�������� ������� �� �����: ";
	cin >> a;
	cout << "������� �� �������� �:" << skorVlak(a) << endl;
	
	
	return 0;
}
float skorVlak(float a) {
	return c / a;
}
float vremeVlak(float b) {
	return c / b;
}

