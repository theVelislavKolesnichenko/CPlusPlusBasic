#include <iostream>
using namespace std;

int main()
{
	char op;
	do
	{
		switch (op)
		{
		default:
			break;
		}
	} while (true);

	int a;
	do {
		cout << "Въведете чиало: ";
		cin >> a;
	} while (a < -1234 || a > 1234);

	cout << "Въведеното число е: " << a << endl;
}

