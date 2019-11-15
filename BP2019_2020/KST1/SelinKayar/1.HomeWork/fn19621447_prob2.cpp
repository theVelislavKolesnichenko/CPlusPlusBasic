#include <iostream>
using namespace std;
int main()
{
	int a, b, c, sum;
	double av; //average
	cout << "Define a=";
	cin >> a;
	cout << "Define b=";
	cin >> b;
	cout << "Define c=";
	cin >> c;

	sum = a + b + c;
	cout << "The sum of those 3 numbers is = " << sum << endl;

	av = sum / 3.0;
	cout << "The average of those 3 numbers is = " << av << endl;
	return 0;

}