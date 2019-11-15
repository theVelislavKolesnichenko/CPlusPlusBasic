#include <iostream>
using namespace std;
float float_in(char ch);
float sum(float a, float b);
float sub(float c, float d);
float div(float e, float f);
float mul(float g, float h);

int main() 
{
    float a, b, c, d, e, f, g, h;
	a = float_in('a');
	b = float_in('b');
	c = float_in('c');
	d = float_in('d');
	e = float_in('e');
	f = float_in('f');
	g = float_in('g');
	h = float_in('h');
	cout << "a + b = " << sum(a, b) << endl;
	cout << "c - d = " << sub(c, d) << endl;
	cout << "e / f = " << div(e, f) << endl;
	cout << "g * h = " << mul(g, h) << endl;
return 0;
}
float float_in(char ch) 
{
	float n;
	cout << ch << "=";
	cin >> n;
return n;
}
    float sum(float a, float b) 
{
return a + b;
}
    float sub(float c, float d) 
{
return c - d;
}
    float div(float e, float f) 
{
return e / f;
}
    float mul(float g, float h) 
{
return g * h;
}