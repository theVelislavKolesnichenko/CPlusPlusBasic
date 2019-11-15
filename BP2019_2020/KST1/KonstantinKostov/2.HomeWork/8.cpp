#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	double S, v, t;
	S = 987;
	cout << "Въведете времето, в часове, за което влака трябва да измине разстоянието от гара А до гара В" << endl;
	cin >> t;
	v = S / t;
	cout << "Необходима скорост на влака: " <<v<<"км/ч"<<endl;
	
	cout << "Въведете скорост на движение,в км/ч: " << endl;
	cin >> v;
	t = S / v;
	cout << "Време пристигане от гара А до гара В: " << t << "ч." << endl;
	return 0;
}