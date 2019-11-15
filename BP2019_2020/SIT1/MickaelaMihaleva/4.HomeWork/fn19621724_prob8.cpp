#include <iostream>
using namespace std;
void chislo(int x);
int main() {
	cout << "Proverka na chislo"<<endl;
	int x;
	do {
		cout << "Vuvedi chislo = ";
		cin >> x;
		chislo(x);
	}		
	while (x != 0);
}


void chislo(int x) {
	if (x < 1000)
		cout << "less four digit"<<endl;
	else if (x > 9999)
		cout << "more four digit"<<endl;
	else
		cout << "four digit"<<endl;
}