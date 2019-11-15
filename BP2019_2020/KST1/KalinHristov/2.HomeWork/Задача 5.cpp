#include <iostream>
using namespace std;
float sum(float a, float b)
{
	float sum1 = 2 * ((a - b) / (b - a));
	return sum1;
}
int main()
{
	float a, b;
	cout << "Izchislqvame izraza: X = 2 * ((a - b) / (b - a))"<< endl;
	cin >> a;
	cin >> b;
	cout << "X = "<< sum (a,b)<< endl;
}