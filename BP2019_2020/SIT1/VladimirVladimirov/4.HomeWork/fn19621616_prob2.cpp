#include <iostream>
using namespace std;
void result(int n);

int main() {
	int n;
	cout << "Въведете число от 1 до 12:" << endl;
	cin >> n;
	result(n);
	return 0;
}
void result(int n) {
	switch (n) {
	case 12:
	case 1:
	case 2:
	{
		cout << "Зимен" << endl;
	}
	break;
	case 3:
	case 4:
	case 5:
	{
		cout << "Пролетен" << endl;
	}
	break;
	case 6:
	case 7:
	case 8:
	{
		cout << "Летен" << endl;
	}
	break;
	case 9:
	case 10:
	case 11:
	{
		cout << "Есенен" << endl;
	}
	break;

	default:
	{
		cout << "Въведеното число не е месец";
	}
	}
	
}