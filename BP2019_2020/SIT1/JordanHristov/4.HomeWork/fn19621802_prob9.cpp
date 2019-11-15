#include <iostream>
using namespace std;

void chislo(int a);
int main() {
	int f = 1;
	chislo(f);

	return 0;
}
void chislo(int a) {
	while (a > 0) {
		cout << "Vuvedi godina:";
		cin >> a;
		if (a % 4 == 0) {
			cout << "Spored Julianskiq kalendar godinata e visokosna" << endl;
		}
		else { cout << "Spored Julianskiq kalendar godinata ne e visokosna" << endl; }

	}
}