#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
	int a, c;
	float y1,y2;
	cout << "a= ";
	cin >> a;
	cout << "c= ";
	cin >> c;
	y1 = sqrt(a + 2) - pow(c, 2);
	y2 = sqrt(a + 2) - c*2;
	cout << " y=sqrt(a+2)-c^2=  " << y1<<endl;
	cout << " y=sqrt(a+2)-c*2=  " << y2<<endl;
	return 0;

}