#include <iostream>
#include<math.h>
using namespace std;
#define SUB (a,b) (a-b)
#define SUM (a,c) (a-c)
int main()
{
	int a, b, c, z; 
	cout << "Choose A=" << endl;
	cin >> a;
	cout << "Choose B=" << endl;
	cin >> b;
	cout << "Choose C=" << endl;
	cin >> c;

	z = 2 * (a - b) * (a - c);

	cout << "z=" <<z<< endl;

	return 0;






}