#include <iostream>
#include <conio.h>
using namespace std;
double uravnenie(double y);
int main()
{
	int y;
	cout << "Vuvedi chisloto y=";
	cin >> y;

	return 0;

}
double uravnenie(double y)
{
	return 2 * (2 * y + 5) / (14 - y / 3);
}