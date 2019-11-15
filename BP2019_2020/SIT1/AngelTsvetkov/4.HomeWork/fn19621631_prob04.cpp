#include <iostream>
#include <math.h>
using namespace std;
void koreni(int b, int d);
int main()
{
	int a, b, d;
	cout << "b = ";
	cin >> b;
	cout << "d = ";
	cin >> d;
	cout << "a1 i a2 sa ravni na = ";
	koreni(b, d);
	return 0;
}
void koreni(int b, int d)
{
	int diskriminanta = pow((2 * b), 2) - 4 * d;
	int x1 = ((-2 * b) + sqrt(diskriminanta)) / 2;
	int x2 = ((-2 * b) - sqrt(diskriminanta)) / 2;
	if (diskriminanta == 0)
	{
		int koreni = (-2 * b) / 2;
		cout << koreni << endl;
	}
	else {
		cout << x1 << " i " << x2 << endl;
		}
}