#include <iostream>
using namespace std;

float AVG(float a, float b, float c, float d);

int main() {
	float a, b, c, d;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	cout << "d= ";
	cin >> d;

	cout << "AVG= " << AVG(a,b,c,d) << endl;
	return 0;
}
float AVG(float a, float b, float c, float d)
{
	return (a + b + c + d) / 4;
	
}