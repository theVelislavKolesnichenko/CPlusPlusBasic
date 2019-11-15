#include <iostream>
#include <math.h>
#include  <conio.h>

using namespace std;

const int km(987);// put na vlaka
double velocity(double v);
double time(double t);

	int main() {
		int velocity,time;
		cout << "How soon do you want to arive at station B:" << endl;
		cin >> time;
		cout << "Your requested speed is:  " << velocity << "km/h" << endl;

		cout << "Your current speed is: " << endl;
		cin >> velocity;
		time = km / velocity;
		cout << "You will arrive at sation B after:" << time << "hours";
	return 0;
}

double time(double t)
{
	return km / t;
}
double velocity(double v)
{
	return km / v;
}

