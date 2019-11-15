#include <iostream>
#include <iomanip>
using namespace std;

void char1(char a);
void char2(char a);
void char3(char a);
int main() {
	char a = '%';
	cout << "a)\n" << endl;
	char1(a);
	cout << "b)\n" << endl;
	char2(a);
	cout << "c)\n" << endl;
	char3(a);
	
	return 0;
}
void char1(char a) {
	for (int i=0; i < 5; ++i)
	{
		cout << a;
	}
	cout << endl;
	for (int i = 0; i < 4; ++i)
	{
		cout << a;
	}
	cout << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << a;
	}
	cout << endl;
	for (int i = 0; i < 2; ++i)
	{
		cout << a;
	}
	cout << endl;
	for (int i = 0; i < 1; ++i)
	{
		cout << a;
	}
	cout << endl;
	
}
void char2(char a) {
	int e(0), h(0), i(0), j(0), k(0);
		while (e< 1) {
			cout << a;
			e++;
		}
		cout << endl;
		while (h< 2) {
			cout << a;
			h++;
		}
		cout << endl;
		while (i< 3) {
			cout << a;
			i++;
		}
		cout << endl;
		while (j < 2) {
			cout << a;
			j++;
		}
		cout << endl;
		while (k < 1) {
			cout << a;
			k++;
		}
		cout << endl;
		

}

void char3(char a) {
	int i(0), j(2), k(4), l(6), m(8);
	do {
		cout << a;
		i++;
	} while (i <= 10);
		cout << endl;
		cout << setw(2);
	do {
		cout << a;
		j++;
	} while (j <= 10);
	cout << endl;
	cout << setw(3);
	do {
		cout << a;
		k++;
	} while (k <= 10);
	cout << endl;
	cout << setw(4);
	do {
		cout << a;
		l++;
	} while (l <= 10);
	cout << endl;
	cout << setw(5);
	do {
		cout << a;
		m++;
	} while (m <= 10);

}