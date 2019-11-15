#include <iostream>
float x(char ch);
void var(float y);
using namespace std;

int main() 
{
    float y;
	y = x('y');
	var(y);
return 0;
}
float x(char ch) 
{
	float x;
	cout << ch << " = ";
	cin >> x;
return x;
}
void var(float y) 
{
	if (y != 0) 
	{
	cout << "x = " << (20 / y);
    }
	else 
	{
	cout << "Числото не може да се раздели на 0";
	}
}