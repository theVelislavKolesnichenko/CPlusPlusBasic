#include <iostream>
using namespace std;
const int S = 987;
int time(int t);
int speed(int v);
int main() {
	int t, v;
	cout << "distance=" << S << endl;
	cout << "time=";
	cin >> v;
	cout << speed(v) << "km/h" << endl;
	cout << "speed=";
	cin >> t;
	cout << time(t) << "hours" << endl;
	return 0;
}
int speed(int t) {
	return S / t;
}
int time(int v) {
	return S / v;
}