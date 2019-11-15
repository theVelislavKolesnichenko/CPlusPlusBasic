#include <iostream>
using namespace std;
int Year(int x);

int main()
{
	int x;
	do {
		cout << "x= ";
		cin >> x;


		cout << Year(x) << endl;
	} while (x > 0);
	return 0;
}
int Year(int x) 
{
	if (x % 4 == 0) {
		cout << "Gap Year: ";
	}
	return x;
}