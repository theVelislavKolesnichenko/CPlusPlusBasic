#include <math.h>
#include <iostream>
using namespace std;

int main()
{	
	int a, c, y;
	cout << "Vuvedete stoinost za a= ";
	cin >> a;
	cout <<endl<< "Vuvedete stoinost za c= ";
	cin >> c;
	y = sqrt(a + 2) - c * 2;
	cout << "Rezultatut na uravnenieto e " << y;
		return 0;
}