#include <iostream>
using namespace std;
bool positive(int a);
int main() {
	int positive1 = 0, negative = 0;
	for (int i = 0; i < 10; i++)
	{
		int a;
		cout << "a= ";
		cin >> a;
		if (positive(a))
			positive1++;

		else
			negative++;
	}
}
bool positive(int a) {
	if (a > 0)
		return true;
	else
		return false;
}