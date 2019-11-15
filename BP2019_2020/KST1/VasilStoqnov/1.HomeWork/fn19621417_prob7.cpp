#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a, c, y;
	cout << "a=";
	cin >> a;
	cout << "c=";                          //imam problem s unicode za kirilica i nqkoi simvoli
	cin >> c;
	y = sqrt(a + 2) - c * 2;
	cout << "y=sqrt(a + 2)-c*2=" << y;
	return 0;

}