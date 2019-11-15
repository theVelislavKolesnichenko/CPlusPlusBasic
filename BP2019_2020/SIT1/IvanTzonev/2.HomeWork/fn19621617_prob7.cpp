#include <iostream>
float float_in(char ch);
float prob(float y);
using namespace std;

int main() 
{
	float y;
	y = float_in('y');
	cout << "x = 2*(2y + 5)/(14 – y/3)" << "\nx = " << prob(y);
return 0;
}
float float_in(char ch) 
{
	float n;
	cout << ch << "=";
	cin >> n;
return n;
}
    float prob(float y) {
return 2 * (2 * y + 5) / (14 - y / 3);
}