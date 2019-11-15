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
	if (a >= 1) 
	{
	cout << "Числото е позитивно";
	}
	else 
	{
	cout << "Числото е отрицателно";
	}
}