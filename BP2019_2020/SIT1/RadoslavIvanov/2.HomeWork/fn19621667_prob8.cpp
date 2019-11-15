#include <iostream>
using namespace std;

int c = 987;
double SpeedNeeded(double time);
double TimeNeeded(double speed);

int main()
{
	double time, speed;
	cout << "time =";
	cin >> time;
	cout << "speed =";
	cin >> speed;
	cout << "\n speed needed is :" << SpeedNeeded(time);
	cout << "\n time needed is :" << TimeNeeded(speed);
	return 0;
}

double SpeedNeeded(double time)
{
	return c / time;
}

double TimeNeeded(double speed)
{
	return c / speed;
}