#include <iostream>
using namespace std;
bool calc(int a);
int main() {

	for (int i = 1; i <= 20; i++) {
		if (calc(i) == false) {
			cout << i<<"-is not a prime number"<<endl;
		}
		else cout << i<<"-is a prime Number"<<endl;
	}
}
bool calc(int a) {
	bool chke = true;
	if (a == 1) {
		chke = false;
		return chke;
		
	}
	else {
		for (int j = 2; j < a; j++) {
			if (a % j == 0) {
				chke = false;
				return chke;
				break;
			}
		}
	}
}