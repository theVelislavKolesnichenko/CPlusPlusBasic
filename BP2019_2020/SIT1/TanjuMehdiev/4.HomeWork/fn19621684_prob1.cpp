#include <iostream>
#include <math.h>
using namespace std;
int urav(int a,int b);

int main()
{
	int a, b;
	cout << "vyvedi a:";
	cin >> a;
	cout << "vyvedi b:";
	cin >> b;
	cout << "reshenieto na uravnenieto e:" << urav(a, b) << endl;
	return 0;
}

int urav(int a, int b)
{
	if (a < 0 || b == 0)
	{
		cout << "Invalid Input";
		return 0;
	}

	else
	{
		return sqrt(a + 2) - 2 / b;
	}
}