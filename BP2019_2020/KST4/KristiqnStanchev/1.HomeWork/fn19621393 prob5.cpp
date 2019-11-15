#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Пример а):\n";
	for (int i = 6; i > 0; i--) {
		cout << setw(i) << setfill('%') << "\n";
	}

	cout << "Пример б):\n";
	cout << setw(2) << setfill('%') << "\n";
	cout << setw(3) << setfill('%') << "\n";
	cout << setw(4) << setfill('%') << "\n";
	cout << setw(3) << setfill('%') << "\n";
	cout << setw(2) << setfill('%') << "\n";

	cout << "\nПример в):\n";
	for (int i = 0; i < 5; i++) {
		cout << setw(i + 2) << setfill('%') << "\n";
	}
	return 0;
}
