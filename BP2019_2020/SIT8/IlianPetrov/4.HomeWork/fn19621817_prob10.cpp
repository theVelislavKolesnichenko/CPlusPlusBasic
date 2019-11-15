#include <iostream>
using namespace std;
int sum(int x);

int main()
{
	int x;
	cout << "x= ";
	cin >> x;

	cout << sum(x) << endl;
	return 0;
}
int sum(int x)
{
	int sum = 0;
	for (int n = 1; n <= 20; n += 1)
	{
		sum = sum + ((pow(x, n) + 1) / (2 * n + 1));
	}
	return sum;
}