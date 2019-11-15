#include <iostream>
using namespace std;
int main()
{
	int a, b, c, e;

	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;

	e = a + b + c;
	
	float d;
	d = float(e) / 3;

	cout <<"Sredna stoynost = "<<d<<endl;
	
	return 0;
}