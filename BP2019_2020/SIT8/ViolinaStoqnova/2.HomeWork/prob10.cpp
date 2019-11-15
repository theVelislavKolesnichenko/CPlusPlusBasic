#include <iostream>
#include <math.h>
struct rectangle {
	int a, b, S;
};
using namespace std;
int main()
{
	int a, b, S;

	cout << "a=" << endl;
	cin >> a;

	cout << "b=" << endl;
	cin >> b;

	S = a * b;

	cout << "S=" <<S<< endl;
	
	return 0;

}