#include <iostream>
using namespace std;

void chislo(int a);
int main() {
	int a;
	cout << "Vuvedi chislo: ";
	cin >> a;
	chislo(a);
	
	return 0;
}
void chislo(int a) {
	int i = 1;
	while (i<=a) {
		cout << i << endl;
		i++;
	}
	
}