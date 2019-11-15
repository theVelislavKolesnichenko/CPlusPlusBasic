#include <iostream>
using namespace std;

float Div(float a, float b);

int main() {
	float a, b;
	cout<<"a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;

	cout << "x= " << Div(a,b) << endl;
	return 0;
}

float Div(float a, float b)
{
	double s, x;
     s = ((a - b) / (b - a));
	 x = 2 * s;

	 return x;
}