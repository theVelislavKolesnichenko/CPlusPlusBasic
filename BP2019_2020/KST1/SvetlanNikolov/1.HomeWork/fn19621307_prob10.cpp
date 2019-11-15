#include <iostream>
using namespace std;

int main() {

	int a, b, P, S; // а и b са страни, P - периметър, S - лице //

	cout << "Vuvedete a = " << endl;
	cin >> a;
	cout << "Vuvedete b = " << endl;
	cin >> b;

		P = 2 * a + 2 * b; 
	cout << "P = " << P << endl;

	S = a * b; 
	cout << "S = " << S << endl;
	
	return 0;
}