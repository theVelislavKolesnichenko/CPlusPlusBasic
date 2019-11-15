#include <iostream>
using namespace std;
int main()
{
	int U = 576 % 10;
	int T = (576 / 10) % 10;
	int H = (576 / 100) % 10;
	cout << "Units: " << U << endl;
	cout << "Tens: " << T << endl;
	cout << "Hundreds: " << H << endl;
	return 0;
}