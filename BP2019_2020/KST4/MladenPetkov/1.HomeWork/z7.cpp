#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, c;
	cout << "Vuvedete stoinsti za a,c!\n";
	cout << "a="; 
	cin >> a;
	cout << "c="; 
	cin >> c;
	double y = sqrt((a + 2) - pow(c, 2));
	cout << "y=" << y << endl;
  return 0;
}