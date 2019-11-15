#include <iostream>
using namespace std;

struct Point {
	double x, y;
};

int per(char ch)
{
	double y;
	cout << ch << " = ";
	cin >> y;
	return y;

}
double sum(double x, double y);
int main()
{
	Point p1;
	p1.x = per('x');
	p1.y = per('y');
	double c = sum(p1.x, p1.y);
	cout << "The rectangle area is: " << c << endl;
	return 0;
}
double sum(double x, double y)
{
	double result;
	result = x*y ;
	return result;
}