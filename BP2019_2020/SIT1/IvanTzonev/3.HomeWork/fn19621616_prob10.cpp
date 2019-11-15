#include <iostream>
float x(char ch);
void var(int a);
using namespace std;

int main() 
{
    int a;
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
void var(int a) 
{
	if (a % 2 == 0) 
	{
	cout << "Четно";
	}
	else 
	{
	cout << "Нечетно";
	}
}