#include <iostream>
using namespace std;

const int S = 987;
int speed(int time);
int time(int speed);

int main() {
	int v = 60;
	int t = 2;

	cout << "Speed of train to travel 987 km in 2 hours = " << speed(2) << "km/h" << endl;
	cout << "Time for train to travel 987 km with 60 km/h = " << time(60)<< " hours" << endl;
	return 0;
}

int speed(int time) {
	int v = S / time;
	return v;
}

int time(int speed) {
	int t = S / speed;
	return t;
}