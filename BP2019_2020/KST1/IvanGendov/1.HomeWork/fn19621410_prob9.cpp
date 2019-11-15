#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	int a, h, s;//kato "a" e stranata na triugulnika a "h" e visochinata
	cout << "Vuvedete strana na triugulnika a=";
	cin >> a;
	cout << "Vuvdete visochinata kum prilejashtata strana h=";
	cin >> h;
	s = (a * h) / 2;
	cout << endl << "Liceto na triugulnika e s=" << s;
	return 0;
}