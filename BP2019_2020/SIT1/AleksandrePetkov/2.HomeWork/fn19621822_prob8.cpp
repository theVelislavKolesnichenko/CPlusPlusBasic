#include <iostream>
using namespace std;

const int dist = 987;

double fromTime(int t) {
	return (double)dist / t;
}
double fromSpeed(int v) {
	return (double)dist / v;
}

int main() {
	int time;
	cout << "Time = ";
	cin >> time;
	cout << "Speed: " << fromTime(time) << endl;

	int velocity;
	cout << "Speed = ";
	cin >> velocity;
	cout << "Time: " << fromSpeed(velocity) << endl;
}