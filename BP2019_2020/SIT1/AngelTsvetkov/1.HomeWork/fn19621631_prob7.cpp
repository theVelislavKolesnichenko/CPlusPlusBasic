#include <iostream> 
#include <math.h>
using namespace std;
int main()
{
	double a, c;
	cout << "Въведете a: ";
	cin >> a;
	cout << "Въведете c: ";
	cin >> c;
	double y = sqrt(a + 2) - c * 2;
	cout << "y е равно на: " << y << endl;
return 0;
}