#include <iostream>
using namespace std;
void sum3(double a,double b,double c);
int main()
{
	double a, b, c;
	cout << "Type 3 numbers: "<<endl;
	cin >> a;
	cin >> b;
	cin >> c;
	sum3(a, b, c);
	return 0;
}
void sum3(double a,double b, double c)
{
	do {
		if (((a != 0) && (b != 0)) && ((a != 0) && (c != 0)) && ((b != 0) && (c != 0)))
		{
			cout << "a+b+c = " << a + b + c << endl;
			cout << "Type 3 numbers: "<<endl;
			cin >> a;
			cin >> b;
			cin >> c;
		}
		else {
			break;
		}
	} while (true);
	}