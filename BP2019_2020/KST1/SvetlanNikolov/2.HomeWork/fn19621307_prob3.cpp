#include <iostream>
#include <conio.h>
using namespace std;

double sum(double x, double y, double z, double c);
double avg(double x, double y, double z, double c);

int main() {
	
	double x, y, z, c;
	double sum, avg;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;
	cout << "c = ";
	cin >> c;
	sum = x + y + c + z;
	avg = sum / 4;
	cout << "Sumata ot chislata e: " << sum << "\n";
	cout << "Srednata stoinost na chislata e: " << avg << "\n";

	return 0;
}
double sum(double x, double y, double z, double c) {
	return x + y + z + c;
}
double avg(double x, double y, double z, double c) {
	return x + y + z + c / 4;
}