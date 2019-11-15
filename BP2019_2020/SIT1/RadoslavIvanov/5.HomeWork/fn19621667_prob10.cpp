#include <iostream>
using namespace std;

void Sum(int &sum);

int main()
{
	int sum = 0;
	cout << sum << endl;;
	Sum(sum);
	cout << sum << endl;
	return 0;
}

void Sum(int &sum)
{
	int a, b;
	cin >> a >> b;
	sum = a + b;
}