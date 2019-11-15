#include <iostream>
using namespace std;
int main()
{
	/*float a, c;
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	float x;
	x = (2y + 5) / (14 - y3);//в условието пише да се въведат a и b от клавиатурата, а в задачата се ползва y
	cout << "x=" << x << endl;
	return 0;*/
	float y;
	cout << "y=";
	cin >> y;
	float x;
	x = (2 * y + 5) / (14 - y * 3);
	cout << "x=" << x << endl;
	return 0;
}