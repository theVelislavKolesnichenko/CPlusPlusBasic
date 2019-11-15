#include <iostream>
using namespace std;
float result();

int main() {
	cout << "Средната стойност на 10-тте числа е: "<<result();
	return 0;
}

float result() {
	int i;
	float arr[10], sum = 0, average;
	cout << "Въведете 10 числа" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}
	average = sum / i;
	return average;
}