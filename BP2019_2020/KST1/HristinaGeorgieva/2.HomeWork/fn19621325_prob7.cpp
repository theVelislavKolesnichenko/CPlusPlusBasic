#include <iostream>
using namespace std;
double double_in(char ch);
int equation(int y);
int main()
{
	int y;
	cout << "y=";
	cin >> y;
	cout <<"x="<< equation(y) << endl;
	system("pause");
	return 0;
}
double double_in(char ch) {
	double g;
	cout << ch << "=";
	cin >> g;
	return g;
}
int equation(int y) {
	int x = 2 * (2 * y + 5) / (14 - y / 3);
	return x;
}
