#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, b, c;
	cout << "Въведете а: " << endl;
	cin >> a;
	cout << "Въведете b: " << endl;
	cin >> b;
	cout << "Въведете c: ";
	cin >> c;
	double z;
	z =2*(a - b)*(a - c);
	
	cout <<"z="<< z;
	return 0;

}