#include<iostream>
#include<iomanip>
using namespace std;

void solveY(double a, double c, double y);

int main()
{
	double a, c, y;
	cout << "a= ";
	cin >> a;
	cout << "c= ";
	cin >> c;
	y = sqrt(a + 2) - 2 / c;
	cout<< setprecision(3);
	solveY(a, c, y);

	return 0;
}
void solveY(double a, double c, double y)
{   if (a < 0 || c == 0) {
	cout << "Invalid input" << endl;
	}
	else {
		cout << y;
	}
}