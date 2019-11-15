#include <iostream>
using namespace std;
float equation(float y);
int main()
{
	float y;
	cout << "y=";
	cin >> y;
	cout<<equation(y)<<endl;
	system("pause");
	return 0;
}
float equation(float y) {
	if (y == 0) {
		cout << "Ne moje da se deli na 0" << endl;
	}
	else {
		float x = 20 / y;
		return x;
	}
}
