#include <iostream>
using namespace std;

struct Point {
	double x,y,z;
};

int per(char ch)
{
	double z;
	cout << ch << " = ";
	cin >> z;
	return z;

}
double sum(double x, double y, double z);
int main()
{
	Point p1;
	p1.x = per('x');
	p1.y = per('y');
	p1.z = per('z');
	double c = sum(p1.x, p1.y, p1.z);
	cout << "The triangle perimeter is: " << c <<endl;
	return 0;
}
double sum(double x, double y, double z)
{
	double result;
	result = x + y + z;
	return result;
}