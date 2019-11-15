#include<iostream>
using namespace std;

void num(int n);

int main()
{
	int n;
	cout << "n=";
	cin >> n;
	num(n);

	return 0;
}
void num(int n) {
	for (int i = 1; i <= n; i++) {
		cout << i << endl;
	}
}

