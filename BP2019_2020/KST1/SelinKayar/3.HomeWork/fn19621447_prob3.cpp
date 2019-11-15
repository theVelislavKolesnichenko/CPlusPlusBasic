#include <iostream>
using namespace std;
float num(float a);
int main()
{
	float a;
	cout << "a= ";
	cin >> a;
	if (a > 0)
		cout << "The number is positive." << endl;
	else if (a < 0)
		cout << "The number is negative." << endl;
	else
		cout << "The number is zero." << endl;

	return 0;
}
float num(float a)
{
	return 0;
}