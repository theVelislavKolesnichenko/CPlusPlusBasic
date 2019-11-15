#include <iostream>
#include <math.h>
using namespace std;

float Time(float v, const int s);
float Speed(float t, const int s);
int main() {
	float v, t;
	cout << "Speed Of The Train: ";
	cin >> v;
	const int s = 987;

	cout << "Time that'll take: ";
	cin >> t;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "t= " << Time(v, s) << " hours" << endl;


	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "v= " << Speed(t, s) << " kilometers per hour" << endl;
	return 0;
}


float Time(float v, const int s)
{
	return s / v;

}
float Speed(float t, const int s)
{
	return s / t;
}