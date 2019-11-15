#include <iostream>
using namespace std;
int broi(long int n);
int main()
{
	long int n;
	cout << "Chislo : ";
	cin >> n;
	cout << broi(n) << endl;
	return 0;
}
int broi(long int n)
{
	int count = 0;
	while (n != 0) {
		n = n / 10;
		count++;
	}
	return count;
}
