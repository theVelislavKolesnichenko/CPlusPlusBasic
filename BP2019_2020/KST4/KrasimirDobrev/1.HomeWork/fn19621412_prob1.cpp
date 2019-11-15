
#include <iostream>

using namespace std;
int main()
{
	float A; int B; int C; int D{};


	cout << "Въведете А" << endl; //Въведете А
	cin >> (A);//Въвеждаме стойност на А
	cout << "Въведете B" << endl;//Въведете Б
	cin >> (B);//Въвеждаме стойност на Б
	cout << "Резултат" << endl;//Резултат
	C = A / B;
	cout << A / B << endl;//Получаваме резултатът от А/Бcout
	D = A / B;
	cout << D << endl;
	return 0;
}

