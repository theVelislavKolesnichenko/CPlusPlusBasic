#include <iostream>
#include<math.h>
using namespace std;
#define AVRG(a,b,c) (a+b+c)/3
int main()
{
	int a, b, c;
	cout << "Choose A=" << endl;
	cin >> a;
	cout << "Choose B=" << endl;
	cin >> b;
	cout << "Choose C=" << endl;
	cin >> c;

	cout << AVRG(a, b, c) << endl;
	return 0;


}