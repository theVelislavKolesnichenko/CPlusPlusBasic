#include <iostream>
#include <cmath>
using namespace std;
int funct(int a)
{
	int numotr=0, numpol=0, numzero=0;
	for (int i = 1;i <= a;i++)
	{
		int n;
		cin >> n;
		if (n > 0) { numpol++; }
		else if (n < 0) { numotr++; }
		else { numzero++; }
	}
	cout << "positive=" << numotr << endl;
	cout << "zeros=" << numzero << endl;
	cout << "negative=" << numpol << endl;

	return 0;
}

int main()
{
	int a;
	cin >> a;
	cout << funct(a) << endl;
	return 0;
}