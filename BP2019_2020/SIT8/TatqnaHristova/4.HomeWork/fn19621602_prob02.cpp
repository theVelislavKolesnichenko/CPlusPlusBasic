#include<iostream>
using namespace std;

void sezon(int a);

int main() 
{
	int a;
	cout << "Month= ";
	cin >> a;
	sezon(a);

	return 0;
}
void sezon(int a) {
	if (a == 12 || a >= 1 && a < 3) {
		cout << "Winter!";
	}
	else if (a >= 3 && a < 6) {
		cout << "Spring!";
	}
	else if (a >= 6 && a < 9) {
		cout << "Summer!";
	}
	else if (a >= 9 && a < 12) {
		cout << "Autumn";
	}
	else {
		cout << "Invalid input";
	}
}