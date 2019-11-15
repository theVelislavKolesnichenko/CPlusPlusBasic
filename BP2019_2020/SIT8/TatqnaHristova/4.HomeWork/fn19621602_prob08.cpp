#include <iostream>
using namespace std;

void fourNum(int n);

int main()
{
	int n;
	cout << "n= ";
	cin >> n;
	if (n != 0) {
		fourNum(n);
	}
	else{
	exit(0);
	}
	
	return 0;
}
void fourNum(int n) {
	if (n >= 1000 && n <= 9999) {
		cout << "four-digit";
	}
	else if (n >= 10000) {
		cout << "more four-digit";
	}
	else if (n > 0 && n <= 999) {
		cout << "less four-digit";
	}
}