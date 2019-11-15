#include <iostream>
using namespace std;
bool Primitive(int a);

int main() {
	int a;
	cout << "a= ";
	cin >> a;
	for (int i = 1; i <= 20; i++)
	{
		if (Primitive(i))
		{
			cout << Primitive(a) << endl;
		}
		return 0;

	}
	return 0;
}
bool Primitive(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}