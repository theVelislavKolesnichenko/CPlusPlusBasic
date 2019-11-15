#include <iostream>
using namespace std;
bool simplenumber(int n);

void main() {
	bool flag;
	for (int n = 1; n <= 20; n++) {
		 flag = simplenumber(n);
		 if (n != 1 && flag == true) {
			 cout << n << endl;
		 }

	}
}

bool simplenumber(int n) {
	bool flag = true;
		for (int i = 2; i <= n / 2 ; i++) {
			if (n % i == 0) {
				flag = false;
				
			}
		}
		return flag;
}