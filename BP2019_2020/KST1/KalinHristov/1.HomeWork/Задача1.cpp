#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int a, b;
	cout << "Vuvedete A:";
	cin >> a;
	cout << "Vuvedete B:";
	cin >> b;
	double a1 = a;
	double b1 = b;
	double c = a1 / b1;
	cout << "A) Izvejdame rezultata ot delenieto na A i B: " << c <<endl;
	float a2 = a;
	double D = a2 / b1;
    cout << "B) Izvejdame rezultata ot delenieto na float A i B:" << D <<endl;
	return 0;

}