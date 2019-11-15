#include <iostream>
using namespace std;
int variables(char ch)
{
	int d;
	cin >> d;
	return d;
}
int time(int d);
int sp(int s);

int main()
{
	cout << "Speed: ";
	int s = variables('s');
	cout << "Time: ";
	int d = variables('d');
	int r = sp(s);
	int h = r % 60;
	int y = time(d);
	
	cout << "If the speed is " << s << " km/h ,the time will be: " << h << "hours." << endl;
	cout << "If the time is " << d << " hours, the speed will be: " << y << "km/h" << endl;
		return 0;
}
int sp(int s)
{
	int result;
	result = (987 /s);
	return result;
}
int time(int d)
{
	int result;
	result = (987 / d);
	return result;
}

