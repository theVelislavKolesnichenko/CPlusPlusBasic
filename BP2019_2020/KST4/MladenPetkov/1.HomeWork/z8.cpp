#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int y;
	cout << "Vuvedete stoinost za y!\n";
	cout << "y=";
	cin >> y;
	double x = (2 * y + 5) / (14 - y / 3);
	cout << "x=" << x << endl;
  return 0;
}