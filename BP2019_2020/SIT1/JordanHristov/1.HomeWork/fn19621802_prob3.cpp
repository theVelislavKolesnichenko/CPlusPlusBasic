#include <iostream>
using namespace std;

int main() {
	int x = 576;
	int u, t, h;

	u = x % 10;
	t = (x/10)%10;
	h = (x/100)%10;

	cout << "Untis: " << u << " Tens: " << t << " Hundreds: " << h;


	return 0;
}