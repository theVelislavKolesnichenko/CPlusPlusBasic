#include <iostream>
using namespace std;

void Double(double &d);

int main()
{
	double d = 0;
	cout << d << endl;
	Double(d);
	cout << d;
	return 0;
}

void Double(double &d)
{
	cin >> d;
}