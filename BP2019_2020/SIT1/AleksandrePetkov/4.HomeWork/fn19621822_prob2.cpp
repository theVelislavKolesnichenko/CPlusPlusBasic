#include <iostream>
using namespace std;

void season(int month);

int main() {
	int month;
	cout << "month = ";
	cin >> month;
	
	if (month < 1 || month > 12) cout << "Not a month!" << endl;
	else season(month);
}

void season(int month) {
	if (month >= 3 && month <= 5) cout << "Spring" << endl;
	else if (month >= 6 && month <= 8) cout << "Summer" << endl;
	else if (month >= 9 && month <= 11) cout << "Autumn" << endl;
	else cout << "Winter" << endl;
}
