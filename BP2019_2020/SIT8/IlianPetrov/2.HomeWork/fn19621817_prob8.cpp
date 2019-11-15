#include <iostream>
#include <math.h>
using namespace std;

float x(float t);

int main() {
	float t,v;
	cout << "Speed of the Train: ";
	cin >> v;
	const int s = 987;
	t = float(s/v);
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "t= " << t <<"Hours" << endl;
	return 0;
}


float x(float t,float v, const int s)
{
	return t=s/v;

}