#include <iostream>
using namespace std;
int main ()
{
	int a, b;
	cout << "Въведи число" << endl;
	cin >> a;
	cout << "Въведи още едно число" << endl;
	cin >> b;
	float c = a / b; 
	cout <<c<<endl;
	{
	float a;
	cout << "Въведи число" << endl;
	cin >> a;
	float d = a / b; 
	cout << d;
	}
	return 0;

}