#include <iostream>
using namespace std;

int functional(int x, int y);
int functional2(int x, int y);

int main() {
	int x;
	int y;
	cin >> x;
	if (x>0){ return y = int functional(int x, int y); }
	else{ return y = int functional2(int x, int y); }

	system("pause");

	return 0;
}
int functional(int x, int y) { cout << "Positive" << endl; } int functional2(int x, int y){ cout << "Negative" << endl; }