#include <iostream>
using namespace std;
float MAX(float a, float b);
int main()
{
	float a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "MAX=" << MAX(a, b) << endl;
	system("pause");
	return 0;
}
float MAX(float a, float b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
