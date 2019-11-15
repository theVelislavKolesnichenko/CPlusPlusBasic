#include <iostream>
using namespace std;
double func(double y)
{
	return 20 / y;
}
int main()
{
	double y;
	cout << "vuvedete chislo=";
	cin >> y;
	if (y == 0.0) cout << "ne se deli na 0";
	else cout<<"reshenieto e=" << func(y)<<endl;
	return 0;
}