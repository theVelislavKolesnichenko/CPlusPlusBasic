#include <iostream>
using namespace std;
int main()
{
	int a, b,c;
	float sum;
	float average;

	cout << "Въведете 3 числа : " << endl;
	cin >> a >> b>> c;
	sum = a+b+c;
	average = sum / 2;
	cout << "Средната стойност на " << a <<" , " <<b <<" и " << c << " e " << average << "." << endl;
}