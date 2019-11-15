#include <iostream>
using namespace std;
int main()
{
	int side;
	int height;

	cout << "Enter side = ";
	cin >> side;

	cout << "Enter height = ";
	cin >> height;

	int x = (side * height) / 2;
	cout << x << endl;
}