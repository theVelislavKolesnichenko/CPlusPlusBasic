#include <iostream>
using namespace std;

float speed(float a)
{
	float r;
	r = 987 / a; //distance : time 
	return r;
}
float time(float b)
{
	float z;
	z = 987 / b;//distance : speed
	return z;

}
int main()
{
	float a, b, y, t;
	cout << "Period of time the train has to finish 987km: ";
	cin >> a;
	y = speed(a);
	cout << "Required train speed= " << y << "km/h" << endl; 

	cout << "Speed of the train (km/h): ";
	cin >> b;
	
	t = time(b);
	cout << "Travel time= " << t <<" hours" << endl;
	
	return 0;
}