#include <iostream>
using namespace std;
const float razstoqnie = 987;
float skorost(int t);
float vreme(int s);

int main() {
	int t;
	cout << "vreme=";
	cin >> t;
	cout << "skorost=" << skorost(t) << endl << endl;
	int s;
	cout << "skorost=";
	cin >> s;
	cout << "vreme=" << vreme(s) << endl;
	return 0;
}

float skorost(int t) {
	return (razstoqnie / t);
}

float vreme(int s) {
	return (razstoqnie / s);
}
