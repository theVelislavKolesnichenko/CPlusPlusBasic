#include <iostream>
using namespace std;
void check(float a);
int main()
{
	float a;
	cout << "a=";
	cin >> a;
	check(a);
	system("pause");
	return 0;
}
void check(float a) {
	if (a >= 0) {
		cout << "Positive" << endl;
	}
	else {
		cout << "Negative" << endl;
	}
}