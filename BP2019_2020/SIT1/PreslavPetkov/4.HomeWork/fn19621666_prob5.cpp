#include <iostream>
using namespace std;
void chislo(int a);
int main() {
	int a;
	cout << "a=";
	cin >> a;
	 chislo(a);
	return 0;
}
void chislo(int a) {
	for (int i = 1; i <= a; i++)
		cout << i << endl;
}