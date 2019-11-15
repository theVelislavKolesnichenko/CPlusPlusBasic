#include <iostream>
using namespace std;

void chislo(float a);
int main() {
	float f=1;
	chislo(f);

	return 0;
}
void chislo(float a) {
	while (a != 0) {
		cout << "a=";
		cin >> a;
		if ((a >= 1000 && a < 10000) || (a<=-1000 && a>-10000)) {
			cout << "four-digit" << endl;
		}
		else if (a < 1000 && a>-1000) { cout << "less than four-digit" << endl; }
		else { cout << "more than four-digit" << endl; }
	
	}


}