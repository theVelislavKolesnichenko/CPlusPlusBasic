#include <iostream>
using namespace std;
const int MAX = 10;
void chisla(int a[], int size, int& numbers);
double avarage(const int a[], int numbers);
int main() {
	int c[MAX], numbers;
	cout << "Enter numbers:\n";
	chisla(c, MAX, numbers);
	cout << "Avarage of the " << numbers << " numbers=" << avarage(c, numbers) << endl << "";
	return 0;
}
void chisla(int a[], int size, int& numbers) {
	cout << "Enter up to " << size << " numbers.\n To stop enter a negative number.\n";
	int next, i = 0;
	cin >> next;
	while ((next >= 0) && (i < size)) {
		a[i] = next;
		i++;
		cin >> next;
	}
	numbers = i;
}
double avarage(const int a[], int numbers) {
	double total = 0;
	for (int i = 0; i < numbers; i++)
		total = total + a[i];
	if (numbers > 0) {
		return (total / numbers);
	}
	else {
		cout << "Error. The number of elements is 0\n so the result is 0.\n";
		return 0;
	}
}