#include<iostream>
using namespace std;

double resNum(double x, double y);

int main()
{
	double x, y;
	cout << "y= ";
	cin >> y;
	x = y / 20;
	cout<<"x= "<<resNum(x, y);
	
	return 0;
}
double resNum(double x, double y) {
	if (x == 0) {
		cout << "Chisloto ne se deli na 0" << endl;
	}
	else { 
		return x;
	}
	return 0;
}
