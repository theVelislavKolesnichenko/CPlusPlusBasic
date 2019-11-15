#include <iostream>
float x(char ch);
float var(float a, float b);
using namespace std;

int main() 
{
	float a, b;
	a = x('a');
	b = x('b');
	cout << "По-голямото число е:" << var(a, b);
return 0;
}
float x(char ch) 
{
	float x;
	cout << ch << "=";
	cin >> x;
return x;
}
float var(float a, float b) 
{
	if (a > b) {
	return a;
	}else {
	return b;
	}
}