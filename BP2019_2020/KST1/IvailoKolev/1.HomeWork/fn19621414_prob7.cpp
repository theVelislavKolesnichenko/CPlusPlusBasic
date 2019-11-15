#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    double a, c,y;
	cout << "Vuvedi stoinost za a "; cin >> a;
	cout << "Vuvedi stoinost za c "; cin >> c;
	y = sqrt(a + 2) - c * 2;
	cout << "Uravnenieto e ravno na " << y << endl;
	return 0;

}