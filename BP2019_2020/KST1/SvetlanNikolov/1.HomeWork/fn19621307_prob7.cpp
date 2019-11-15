#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a, c, y;

	cout << "Vuvedete a = " << endl;
	cin >> a;
	cout << "Vuvedete c = " << endl;
	cin >> c;
	
	y = sqrt((a + 2) - c * 2);
	cout << "y = " << y << endl;
	cin >> y;
	
	return 0;
}