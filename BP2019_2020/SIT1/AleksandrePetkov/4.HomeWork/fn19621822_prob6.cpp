#include <iostream>
using namespace std;

void outputA(int rows);
void outputB(int rows);
void outputC(int rows);

int main() {
	double rows;
	cout << "rows = ";
	cin >> rows;

	outputA(rows);
	outputB(rows);
	outputC(rows);
}

void outputA(int rows) {
	cout << "A)" << endl;

	for (int i = rows; i > 0; i--) {
		for (int j = 1; j <= i; j++)cout << '%';
		cout << endl;
	}
	cout << endl;
}
void outputB(int rows) {
	cout << "B)" << endl;

	for (int i = 1; i <= rows / 2 + rows % 2; i++) {
		for (int j = 1; j <= i; j++)cout << '%';
		cout << endl;
	}
	for (int i = rows / 2; i > 0; i--) {
		for (int j = 1; j <= i; j++)cout << '%';
		cout << endl;
	}
	cout << endl;
}
void outputC(int rows) {
	cout << "C)" << endl;

	for (int i = rows; i >= 1; i--) {
		for (int j = 0; j < rows - i; j++)cout << ' ';
		for (int j = 0; j < 2*i; j++)cout << '%';
		cout << endl;
	}
	cout << endl;
}