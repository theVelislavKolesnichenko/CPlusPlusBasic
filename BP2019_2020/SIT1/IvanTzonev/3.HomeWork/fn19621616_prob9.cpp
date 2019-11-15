#include <iostream>
float x(char ch);
void var(float a);
using namespace std;

int main() 
{
    float a;
	a = x('a');
	var(a);
return 0;
}
float x(char ch) 
{
	float x;
	cout << ch << " = ";
	cin >> x;
return x;
}
void var(float a) 
{
	if (a > 0 && a < 1) 
	{
	cout << "In this age you are Baby";
    }
	else if (a >= 1 && a < 3) 
	{
	cout << "In this age you are Toddler";
	}
	else if (a >= 3 && a < 5) 
	{
	cout << "In this age you are Preschool";
	}
	else if (a >= 5 && a <= 12) 
	{
	cout << "In this age you are Gradeschooler";
	}
	else if (a >= 13 && a < 18) 
	{
	cout << "In this age you are Teen";
	}
	else if (a >= 18 && a < 21) 
	{
	cout << "In this age you are Young Adult";
	}
	else 
	{
	cout << "The age that you did input isn't in the range";
	}
}