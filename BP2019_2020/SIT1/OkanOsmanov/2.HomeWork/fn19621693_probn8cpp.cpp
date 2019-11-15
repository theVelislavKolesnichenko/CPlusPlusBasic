#include <iostream>
using namespace std;

int SPEED(int hours);
int TIME(int speed);

int main()
{
	int hours, speed;
	cout << "Enter hours:\n";
	cin >> hours;
	cout << "Enter speed:\n";
	cin >> speed;
	cout << SPEED(hours) << " km/h you must travel with." << endl <<
		TIME(speed) << " hours needed to get to point B from point A";

	return 0;
}

int SPEED(int hours)
{
	double speed = 987 / hours;
	return speed;
}
int TIME(int speed)
{
	double neededTime = 987 / speed;
	return neededTime;
}