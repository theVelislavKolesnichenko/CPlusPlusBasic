#include <iostream>

using namespace std;

const int DistanceBetweenAandB = 987; // kilometers

double getNeededSpeed(int);
double getNeededTime(double);

int main()
{
	int hoursToCommute = 0;
	double speedOfTrain = 0;

	cout << ("Enter hours to cummute to get needed speed: ");
	scanf_s("%i", &hoursToCommute);
	cout << ("Needed speed: %.2f kph\n", getNeededSpeed(hoursToCommute));

	cout << ("Enter speed of train to get needed time: ");
	scanf_s("%lf", &speedOfTrain);
	cout << ("Needed time: %.2f hours\n", getNeededTime(speedOfTrain));

	return 0;
}

double getNeededSpeed(int hours) {
	return double(DistanceBetweenAandB) / hours;
}

double getNeededTime(double speed) {
	return double(DistanceBetweenAandB) / speed;
}
