#include <iostream>
#include <math.h>
float x(char ch);
float var(float y);
using namespace std;

int main() 
{
    float y;
	y = x('y');
	cout << "x = " << var(y);
return 0;
}
float x(char ch) 
{
	float x;
	cout << ch << " = ";
	cin >> x;
return x;
}
float var(float y) 
{
	if (y <= -5) 
	{
	return  pow(y, 3) + (pow(y, 4) + 2 * y);
    }
	else if (y > 5) 
	{
	return 2 * (2 * y + 5) / (14 - y / 3);
	}
}